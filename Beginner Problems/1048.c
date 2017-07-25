#include<stdio.h>
#include<stdlib.h>

int main(){
  float salary, final, increase;
  int option;
  scanf("%f", &salary);
  increase = (salary<=400.00) ? 1.15 : increase;
  increase = (salary>=400.01 && salary<=800) ? 1.12 : increase;
  increase = (salary>=800.01 && salary<=1200) ? 1.10 : increase;
  increase = (salary>=1200.01 && salary<=2000) ? 1.07 : increase;
  increase = (salary>=2000.01) ? 1.04 : increase;
  float salary_new = salary*increase;

  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", salary_new, (salary_new-salary), (increase*100)-100);
}
