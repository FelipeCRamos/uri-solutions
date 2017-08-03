/* 1072 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1072 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
  int n, i, contador = 0, contador_fora = 0;
  scanf("%i", &n);
  //printf("%i", n);
  int number[n];
  //printf("%i", number[n]);
  //int number[n] = {0};
  for(i = 0; i < n; i++){
    scanf("%i", &number[i]);
    if(number[i] >= 10 && number[i] <= 20){
      contador++;
    }else{
      contador_fora++;
    }
    //printf("%i = number[%i]", number[i], i);
  }
  printf("%i in\n%i out\n", contador, contador_fora);
  return 0;
}
