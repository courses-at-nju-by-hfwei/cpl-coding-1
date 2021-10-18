//
// Created by hengxin on 10/18/21.
//

#include <stdio.h>
int main() {
  int n = 0;
  scanf("%d", &n);

  int sum = 0;
  /**
   * for: keyword
   * i++: i = i + 1
   * init: i = 1
   * loop 1: i <= 100 => sum = sum + 1 = 1; i++ => i = 2
   * loop 2: 2 <= 100 => sum = sum + 2 = 3; i++ => i = 3
   * loop 3: 3 <= 100 => sum = sum + 3 = 6; i++ => i = 4
   * ...
   * loop 100: i <= 100 => sum = sum + 100 = 5050; i++ => i = 101
   * loop 101: i <= 100 => exit the for loop
   */
  for (int i = 1; i <= n; i++) {
    /**
     * sum += i: sum = sum + i;
     */
    sum += i;
  }


  printf("sum = %d.\n", sum);

  return 0;
}
