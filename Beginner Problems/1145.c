/* 1145 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1145 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, y, i, j;
  scanf("%i %i", &x, &y); // x=3, y=99
  for (i = 1; i <= y; i += x) {
    for (j = i; j <= i+x-1; j++) {
      (j!=i+x-1)? printf("%i ", j) : printf("%i", j);
    }
    printf("\n");
  }
  return 0;
}
