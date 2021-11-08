//
// Created by hengxin on 10/16/21.
//

#include <stdio.h>

// year: formal parameter (形式参数)
int IsLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
  // local variable
  int year;
  scanf("%d", &year);

  if (IsLeapYear(year)) {
    printf("The year %d is a leap year.\n", year);
  } else {
    printf("The year %d is not a leap year.\n", year);
  }

  return 0;
}