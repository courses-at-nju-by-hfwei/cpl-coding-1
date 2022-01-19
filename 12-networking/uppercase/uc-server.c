/**
 * file: uc-server.c
 *
 * Created by hengxin on 1/19/22.
 */

#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  const char *NAME = NULL;  // ip (hostname)
  const char *SERVICE = "8080"; // port number

  struct addrinfo hints = {
      .ai_family = AF_INET, // IPv4
      .ai_socktype = SOCK_STREAM, // TCP (not UDP)
      .ai_flags = AI_PASSIVE  // use "0.0.0.0", only for bind
  };

  struct addrinfo *bind_addr;
  if (getaddrinfo(NAME, SERVICE, &hints, &bind_addr) != 0) {
    // printf: stdout
    // fprintf: stderr
    fprintf(stderr, "getaddrinfo() failed\n");
    exit(EXIT_FAILURE);
  }

  // create socket
  // socket_listen: file descriptor >= 0; -1 : error
  int socket_listen = socket(bind_addr->ai_family,
                             bind_addr->ai_socktype,
                             bind_addr->ai_protocol);
  if (socket_listen == -1) {
    fprintf(stderr, "socket() failed\n");
    exit(EXIT_FAILURE);
  }

  // bind: 0 : success; -1 : error
  if (bind(socket_listen,
           bind_addr->ai_addr, bind_addr->ai_addrlen) != 0) {
    fprintf(stderr, "bind() failed\n");
    exit(EXIT_FAILURE);
  }
  freeaddrinfo(bind_addr);

  // listen: 0 : success; -1 : error
  if (listen(socket_listen, 32) != 0) {
    fprintf(stderr, "listen() failed\n");
    exit(EXIT_FAILURE);
  }

  // accept: block until there is a new connection from some client
  // TODO: the last two parameters
  // accept: fd >= 0; -1 : error
  int socket_client = accept(socket_listen, NULL, NULL);
  if (socket_client == -1) {
    fprintf(stderr, "accept() failed\n");
    exit(EXIT_FAILURE);
  }

  printf("Connection Established\n");

  char text[1024];
  int bytes_received = recv(socket_client, text, sizeof text, 0);
  if (bytes_received == -1) {
    fprintf(stderr, "recv() failed\n");
    exit(EXIT_FAILURE);
  }

  printf("Received %d bytes: %.*s\n",
         bytes_received, bytes_received, text);

  return 0;
}

