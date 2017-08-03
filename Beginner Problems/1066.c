/* 1066 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1066 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int value[5] = {0};
  int i, par = 0, impar= 0, positivo = 0, negativo = 0;
  //printf("%i %i %i %i", par, impar, positivo, negativo);
  for(i=0;i<5; i++){
    scanf("%i", &value[i]);
    if(value[i]%2 == 0){
      par++;
    }else{
      impar++;
    }
    if(value[i]>0){
      positivo++;
    }else{
      if(value[i] != 0){
        negativo++;
      }
    }
  }
  printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, positivo, negativo);
  return 0;
}
