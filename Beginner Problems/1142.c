/* 1142 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1142 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>

int main(void){
  int number, i, j=1;
  scanf("%i", &number);
  for(i=0; i<number; i++){
    printf("%i %i %i PUM\n", j, j+1, j+2);
    j += 4;
  }
  return 0;
}
