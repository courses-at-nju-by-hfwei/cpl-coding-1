/**
 * file: strlen.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

int StrLen(const char *s);

int main() {
  char msg[20] = "Hello World!";

  printf("The length of the message \"%s\" = %d\n",
         msg, StrLen(msg));

  return 0;
}

int StrLen(const char *s) {
  int len = 0;
  while (*s != '\0') {
    s++;
    len++;
  }

  return len;
}
