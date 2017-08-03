/* 1153 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1153 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>

int factorial(int x){
    if(x == 0) return 1;
    else return x * factorial(x-1);
}

int main(void){
  int number;
  scanf("%i", &number);
  printf("%i\n", factorial(number));
}
