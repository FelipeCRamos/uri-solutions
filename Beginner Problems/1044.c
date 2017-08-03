/* 1044 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1044 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
  int a, b;
  scanf("%i %i", &a, &b);
  if((b%a)==0 || (a%b)==0){
    printf("Sao Multiplos\n");
  }else{
    printf("Nao sao Multiplos\n");
  }
}
