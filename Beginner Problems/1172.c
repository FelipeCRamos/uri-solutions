/* 1172 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1172 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int i, X[10] = {0};
  for(i=0; i<10; i++){
    scanf("%i", &X[i]);
    if(X[i]<=0){
      X[i] = 1;
    }
  }
  for(i=0; i<10; i++){
    printf("X[%i] = %i\n", i, X[i]);
  }
}
