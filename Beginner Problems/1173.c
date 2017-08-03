/* 1173 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1173 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>
int main(void){
  int n[10];
  int i;
  scanf("%i", &n[0]);
  for(i=1; i<10; i++){
    n[i] = n[i-1]*2;
  }
  for(i=0; i<10; i++){
    printf("N[%i] = %i\n", i, n[i]);
  }
  return 0;
}
