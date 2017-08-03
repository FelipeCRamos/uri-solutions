/* 1078 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1078 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int n, i;
  scanf("%i", &n);
  for(i=1; i<=10; i++){
    printf("%i x %i = %i\n", i, n, (i*n));
  }
}
