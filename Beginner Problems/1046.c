/* 1046 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1046 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>

int main(){
  int start, finish, duracao;
  scanf("%i %i", &start, &finish);
  if(start>=finish){
    duracao = (24-start)+finish;
  }else{
    duracao = finish - start;
  }
  printf("O JOGO DUROU %i HORA(S)\n", duracao);
  return 0;

}
