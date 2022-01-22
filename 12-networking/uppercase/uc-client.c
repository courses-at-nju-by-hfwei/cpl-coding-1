/**
 * file: uc-client.c
 *
 * Created by hengxin on 1/19/22.
 */

#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    fprintf(stderr, "Usage: uc-client hostname port\n");
    exit(EXIT_FAILURE);
  }

  struct addrinfo hints = {
      .ai_socktype = SOCK_STREAM
  };
  struct addrinfo *server_addr;
  if (getaddrinfo(argv[1], argv[2], &hints, &server_addr) != 0) {
    fprintf(stderr, "getaddrinfo() failed\n");
    exit(EXIT_FAILURE);
  }

  int socket_server = socket(server_addr->ai_family,
                             server_addr->ai_socktype,
                             server_addr->ai_protocol);
  if (socket_server < 0) {
    fprintf(stderr, "socket() failed\n");
    exit(EXIT_FAILURE);
  }

  if (connect(socket_server,
          server_addr->ai_addr, server_addr->ai_addrlen) == -1) {
    fprintf(stderr, "connect() failed\n");
    exit(EXIT_FAILURE);
  }
  freeaddrinfo(server_addr);

  printf("Connection Established\n");

  printf("Now send a text message to the server.\n");
  const char *text = "hello C network programming";
  int bytes_sent = send(socket_server, text, strlen(text), 0);
  if (bytes_sent == -1) { // the socket has closed
    fprintf(stderr, "send() failed\n");
    exit(EXIT_FAILURE);
  }
  printf("Send %d bytes\n", bytes_sent);

  close(socket_server);

  return 0;
}
