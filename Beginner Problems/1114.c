/* 1114 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1114 */
/* MADE BY: FELIPECRAMOS */

#include <stdlib.h>
#include <stdio.h>
int main(void){
  int correct = 2002;
  int pass;
  do{
    scanf("%i", &pass);
    if(pass == correct) printf("Acesso Permitido\n");
    else printf("Senha Invalida\n");
  } while(pass != correct);
  return 0;
}
