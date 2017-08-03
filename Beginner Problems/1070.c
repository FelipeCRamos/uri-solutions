/* 1070 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1070 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int value, i;
  int consecutive[6] = {0};
  scanf("%i", &value);
  if(value%2==0){
    printf("%i\n%i\n%i\n%i\n%i\n%i\n", value+1, value+3, value+5, value+7, value+9, value+11);
  }else{
    printf("%i\n%i\n%i\n%i\n%i\n%i\n", value, value+2, value+4, value+6, value+8, value+10);
  }

  return 0;
}
