/**
 * file: game-of-life.c
 *
 * Simulate "Conway's Game of Life"
 * See https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life
 * Play with it: https://playgameoflife.com/
 *
 * Created by hengxin on 10/30/21.
 */

#include <stdio.h>
#include <unistd.h>
#define SIZE 6
int board[SIZE][SIZE] = {
    {0},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0},
    {0}};

int main() {

  return 0;
}

