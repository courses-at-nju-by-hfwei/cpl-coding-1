//
// Created by hengxin on 10/21/21.
//

#include <stdio.h>
int main() {
  /**
   * input: 56789 0123 56a72
   * Adapted from "The Standard C Library" (P243)
   */
//  int i;
//  double x;
//  char name[50];

  /**
   * %*d: *: do not assign it to a variable
   * %[scanlist]:
   *
   * input: 56789 0123 56a72
   */
//  scanf("%2d %lf %*d %[0123456789]", &i, &x, name);
//  printf("i = %d \t x = %f \t name = %s", i, x, name);

  /**
   * Adapted from "The Standard C Library" (P243)
   */
  double quantity = 0;
  char units[21] = "";
  char item[21] = "";

  /**
   * 2 quarts of oil
   * -12.8degrees Celsius
   * lots of luck
   * 10.0LBS of
   * dirt
   * 100ergs of energy
   *
   * (See https://stackoverflow.com/q/69426556/1833118)
   * EOF: end of file
   * %[^scanlist]:
   */
  while (scanf("%lf%20s of %20s", &quantity, units, item) != EOF) {
    printf("quantity = %f \t units = %s \t item = %s\n", quantity, units, item);
    scanf("%*[^\n]");
  }

  return 0;
}