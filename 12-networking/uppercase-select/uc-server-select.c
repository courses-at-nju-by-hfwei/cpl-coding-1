/**
 * file: uc-server-select.c
 * author: hengxin
 * date: 1/18/22
 */

#include <netdb.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

#define QUEUE_SIZE 32
#define BUFFER_SIZE 1024

int main() {
  const char *NAME = NULL;
  const char *SERVICE = "8080";

  /**
   * figure out our local address that our server should bind to
   */
  struct addrinfo hints = {
      .ai_family = AF_INET,
      .ai_socktype = SOCK_STREAM,
      .ai_flags = AI_PASSIVE
  };

  struct addrinfo *bind_addr;
  if (getaddrinfo(NAME, SERVICE, &hints, &bind_addr) != 0) {
    fprintf(stderr, "getaddrinfo() failed\n");
    exit(EXIT_FAILURE);
  }

  /**
   * create the socket and get the fd
   */
  printf("Creating socket ...\n");
  int socket_listen = socket(bind_addr->ai_family,
                             bind_addr->ai_socktype,
                             bind_addr->ai_protocol);
  if (socket_listen < 0) {
    fprintf(stderr, "socket() failed.");
    exit(EXIT_FAILURE);
  }

  /**
   * bind socket to local address
   */
  printf("Binding socket to local address ...\n");
  if (bind(socket_listen, bind_addr->ai_addr, bind_addr->ai_addrlen) < 0) {
    fprintf(stderr, "bind() failed.");
    exit(EXIT_FAILURE);
  }
  freeaddrinfo(bind_addr);

  /**
   * start listening for connections
   */
  printf("Starting listening ...\n");
  if (listen(socket_listen, QUEUE_SIZE) < 0) {
    fprintf(stderr, "listen() failed.\n");
    exit(EXIT_FAILURE);
  }

  /**
   * fds: the set of sockets to monitor using select()
   * fd: file descriptor
   * In Unix-like systems, stdin, sockets, and files have file descriptors.
   */
  fd_set fds;
  FD_ZERO(&fds);
  FD_SET(socket_listen, &fds);
  int max_socket = socket_listen;

  printf("Waiting for connection ...\n");

  while (1) {
    // you should make a copy of fds, since select() will modify its parameters
    fd_set reads = fds;
    if (select(max_socket + 1, &reads, NULL, NULL, NULL) < 0) {
      fprintf(stderr, "select() failed\n");
      break;
    }

    for (int i = 1; i <= max_socket; i++) {
      if (FD_ISSET(i, &reads)) {
        if (i == socket_listen) { // a new connection comes in
          struct sockaddr_storage client_addr;
          socklen_t  client_len = sizeof(client_addr);

          // accept() fills client_addr with the client's address info
          int socket_client = accept(socket_listen,
                                     (struct sockaddr *) &client_addr,
                                     &client_len);
          if (socket_client < 0) {
            fprintf(stderr, "accept() failed\n");
            exit(EXIT_FAILURE);
          }

          // monitor the new connection with subsequent calls to select()
          FD_SET(socket_client, &fds);
          if (socket_client > max_socket) {
            max_socket = socket_client;
          }

          // get the client's address using getnameinfo()
          char address_buffer[100];
          char service_buffer[100];
          getnameinfo((struct sockaddr *) &client_addr, client_len,
              address_buffer, sizeof address_buffer,
              service_buffer, sizeof service_buffer,
              NI_NUMERICHOST);
          printf("New connection from %s:%s\n", address_buffer, service_buffer);
        } else {  // there is data available to be read with recv() on socket i
          char text[BUFFER_SIZE];
          int bytes_received = (int) recv(i, text, BUFFER_SIZE, 0);
          if (bytes_received < 1) { // the client has disconnected
            FD_CLR(i, &fds);
            close(i);
            continue;
          } else {
            printf("Received %d bytes: %.*s\n",
                   bytes_received, bytes_received, text);

            for (int j = 0; j < bytes_received; j++) {
              text[j] = (char) toupper(text[j]);
            }
            int bytes_sent = (int) send(i, text, bytes_received, 0);
            if (bytes_sent > 0) {
              printf("Send %d bytes: %.*s\n",
                     bytes_sent, bytes_sent, text);
            }
          }
        }
      }
    }
  }

  /**
   * Closing the listening socket
   */
  printf("Closing listening socket ...\n");
  close(socket_listen);

  printf("Finished.\n");

  return 0;
}