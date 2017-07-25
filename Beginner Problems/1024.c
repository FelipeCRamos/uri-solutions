#include<stdlib.h>
#include<stdio.h>
#include<strings.h>
int main(void){
  int n, i;
  scanf("%i", &n);
  char frase[n];
  char frase_passo1[n];

  for(i=0; i<n; i++){
    scanf("%s", &frase[i]);
    frase_passo1[i] = (frase[i]+4);

  }
  printf("%s\n", frase_passo1);
  /* inicio do programa de vdd */
  // Primeira operação: Toda letra deverá andar 3 casas à direita. ('a' tem que virar 'd');
  system("pause");
  return 0;

}
