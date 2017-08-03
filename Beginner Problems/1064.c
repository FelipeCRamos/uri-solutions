/* 1064 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1064 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  float value[6] = {0};
  float media = 0;
  int i, contador = 0;
  for(i=0; i<6; i++){
    scanf("%f", &value[i]);
    if(value[i]>0){
      contador++;
      media += value[i];
    }
  }
  printf("%i valores positivos\n%.1f\n", contador, (media/contador));
}
