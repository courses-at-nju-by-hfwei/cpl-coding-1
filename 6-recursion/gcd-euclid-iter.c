/**
 * file: gcd-euclid-iter.c
 *
 * if a > b
 * then gcd(a, b) = gcd(a - b, b)
 * else gcd(a, b) = gcd(a, b - a)
 *
 * gcd(32, 42) = gcd(32, 10) = gcd(22, 10) = gcd(12, 10)
 * = gcd(2, 10) = gcd(2, 8) = gcd(2, 6) = gcd(2, 4)
 * = gcd(2, 2) = 2
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  return 0;
}
