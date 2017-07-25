#include <stdlib.h>
#include <stdio.h>

int main(void){
  int n_exp, i;
  scanf("%i", &n_exp);
  int total=0, coelhos=0, ratos=0, sapos=0, qnt=0;
  double p_coelhos, p_ratos, p_sapos;
  char animal;
  for(i=0; i<n_exp; i++){
    scanf("%i %c", &qnt, &animal);
    if(animal == 'C'){
      coelhos += qnt;
      total += qnt;
    }
    if(animal == 'R'){
      ratos+= qnt;
      total += qnt;
    }
    if(animal == 'S'){
      sapos += qnt;
      total += qnt;
    }
  }

  p_coelhos = ((double)coelhos/ (double)total)*100;
  p_ratos = ((double)ratos/ (double)total)*100;
  p_sapos = ((double)sapos/ (double)total)*100;

  printf("Total: %i cobaias\n"
         "Total de coelhos: %i\n"
         "Total de ratos: %i\n"
         "Total de sapos: %i\n", total, coelhos, ratos, sapos);
  printf("Percentual de coelhos: %.2lf %%\n"
         "Percentual de ratos: %.2lf %%\n"
         "Percentual de sapos: %.2lf %%\n", p_coelhos, p_ratos, p_sapos);

  return 0;
}
