/* 1866 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1866 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int *tc = (int *)malloc(sizeof(int)), i, *teste = (int *)malloc(sizeof(int));
  scanf("%i", tc);
  for(i=0; i<*tc; i++){
    scanf("%i", teste);
    *teste % 2 == 0 ? printf("0\n") : printf("1\n");
  }
  return 0;
}
