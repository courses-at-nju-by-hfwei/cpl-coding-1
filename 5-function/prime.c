//
// Created by hengxin on 10/23/21.
//

#include <stdio.h>

// function declaration (声明)
int IsPrime(int number);

int main() {
  int max = 0;
  scanf("%d", &max);

  for (int number = 2; number <= max; number++) {
    if (IsPrime(number)) {
      printf("%d ", number);
    }
  }

  return 0;
}

// function definition
int IsPrime(int number) {
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return 0;
    }
  }
  return 1;
}

