/* 1143 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1143 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x,i;
  scanf("%i", &x);
  for(i=1; i<=x; i++){
    printf("%i %i %i\n", i, i*i, i*i*i);
  }
  return 0;
}
