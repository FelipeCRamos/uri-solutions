/* 1067 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1067 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int X, i;
  scanf("%i", &X);
  for(i=1; i<=X; i++){
    if((i%2) != 0){
      printf("%i\n", i);
    }
  }
}
