/* 1028 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1028 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>
#include <stdlib.h>

int gdc(int *n1, int* n2){
  /* n1 = menor, n2 = maior */
  int gdc;
  /* ciclo for(), tempo de execução: < 1 s */
  // for(i = 1; i <= *n2/2; i++){
  //   if(*n1 % i == 0){
  //     if(*n2 % i == 0) gdc = i;
  //   }
  // }

  /* ciclo while(), tempo de execução: 0.0016 s */
  while(*n2 % *n1 != 0){
    gdc = *n2 % *n1;
    *n2 = *n1;
    *n1 = gdc;
  }
  return gdc;
};

int main(int argc, char const *argv[]) {
  int *tc = (int *)malloc(sizeof(int)), i;
  int *f1 = (int *)malloc(sizeof(int)), *f2 = (int *)malloc(sizeof(int));
  int *maior = (int *)malloc(sizeof(int)), *menor = (int *)malloc(sizeof(int));

  /* LEITURA */
  scanf("%i", tc);

  /* LEITURA FOR */
  for(i = 0; i < *tc; i++){
    scanf("%i %i", f1, f2);
    if(f1 > f2) maior = f1, menor = f2; else maior = f2, menor = f1;
    if(*maior % *menor == 0){
      printf("%i\n", *f1);
    }
    else{
      printf("%i\n", gdc(menor, maior));
    }
  }
  return 0;
}
