/* 1060 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1060 */
/* MADE BY: FELIPECRAMOS */

#include<stdio.h>
#include<stdlib.h>

int main(){
  int contador = 0;
  double num[6] = {0};
  int i;
  for(i = 0; i < 6; i++){
    scanf("%lf", &num[i]);
    //printf("%lf - i=%i\n", num[i], i);
    if(num[i]>0){
      contador += 1;
    }
    //contador = (num[i]>0) ? contador += 1 : contador*1;
  }
printf("%i valores positivos\n", contador);
}
