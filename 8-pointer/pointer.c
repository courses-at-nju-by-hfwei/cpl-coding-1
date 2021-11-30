/**
 * file: pointer.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

int main() {
  int radius = 10;
  printf("radius = %d\n", radius);

  int *ptr_radius = &radius;
  printf("&radius = %p\n", &radius);
//  printf("&radius = %x\n", ptr_radius);

  double circumference = 2 * 3.14 * (*ptr_radius);
  printf("circumference = %f\n", circumference);

  radius = 20;
  printf("radius = %d\n", radius);

  *ptr_radius = 30;
  printf("radius = %d\n", radius);

  int radius_1 = 100;
  int *ptr_radius_1 = &radius_1;

  ptr_radius = ptr_radius_1;
  *ptr_radius = 200;
  printf("radius = %d\n", *ptr_radius_1);

  return 0;
}