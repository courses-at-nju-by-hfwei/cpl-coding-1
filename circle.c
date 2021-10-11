//
// Created by hengxin on 10/11/21.
//

#include <stdio.h>
int main() {
  /**
   * const: constant
   */
  const double PI = 3.14159;
  int radius = 10;

  double circumference = 0;
  /**
   * assignment (赋值) statement
   */
  circumference = 2 * PI * radius;
  double area = PI * radius * radius;

  /**
   * %f: floating-point number
   */
  printf("circumference = %.2f\narea = %.2f", circumference, area);

  return 0;
}

