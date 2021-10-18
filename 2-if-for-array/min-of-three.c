//
// Created by hengxin on 10/18/21.
//

#include <stdio.h>
int main() {
  int a = 0;
  int b = 0;
  int c = 0;

  scanf("%d%d%d", &a, &b, &c);

  int min;
  if (a >= b) {
    if (b >= c) {
      min = c;
    } else { // b < c
      min = b;
    }
  } else { // a < b
    if (c >= a) {
      min = a;
    } else {
      min = c;
    }
  }

  printf("min{%d, %d, %d} = %d\n", a, b, c, min);

  return 0;
}

