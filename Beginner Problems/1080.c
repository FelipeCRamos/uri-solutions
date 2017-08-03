/* 1080 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1080 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int value[100] = {0};
  int i, maior = 0, pos = 0;
  for(i=0; i < 100; i++){
    scanf("%i", &value[i]);
    if(i == 0){
      maior = value[i];
      pos = i+1;
    }
    else{
      if(value[i]>maior){
        //se o valor[i] for maior que o maior
        maior = value[i];
        pos = i+1;
      }else{
        // maior continua sendo ele mesmo
        maior = maior;
      }
    }
  }
printf("%i\n%i\n", maior, pos);
return 0;
}
