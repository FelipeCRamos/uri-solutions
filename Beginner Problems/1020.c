/* 1020 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1020 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>

int main(){
  int dias, meses, anos;
  scanf("%i", &dias);
  meses = dias/30;
  dias = dias - meses*30;
  anos = meses/12;
  meses = meses - anos*12;
  printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", anos, meses, dias);
  return 0;
}
