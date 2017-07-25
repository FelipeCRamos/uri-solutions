#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  double valor;
  int n100, n50, n20, n10, n05, n02, m100, m50, m25, m10, m05, m01;
  scanf("%lf", &valor);
  // operações
  n100 = valor/100;
  valor = valor - n100*100;
  n50 = valor/50;
  valor = valor - n50*50;
  n20 = valor/20;
  valor = valor - n20*20;
  n10 = valor/10;
  valor = valor - n10*10;
  n05 = valor/5;
  valor = valor - n05*5;
  n02 = valor/2;
  valor = valor - n02*2;
  double valor_float = valor;
  m100 = valor_float/1;
  valor_float = valor_float - m100*1;
  m50 = valor_float/0.50;
  valor_float = valor_float - m50*0.50;
  m25 = valor_float/0.25;
  valor_float = valor_float - m25*0.25;
  m10 = valor_float/0.10;
  valor_float = valor_float - m10*0.10;
  m05 = valor_float/0.05;
  valor_float = valor_float - m05*0.05;
  m01 = valor_float/0.01;
  valor_float = valor_float - m01*0.01;
  printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\nMOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n05, n02, m100, m50, m25, m10, m05, m01);

}
