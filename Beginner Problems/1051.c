#include<stdio.h>
#include<stdlib.h>
int main(){
  float salary;
  scanf("%f", &salary);
  //printf("%lf\n", salary);
  //int tax0 = /* none */;
  float tax1 = salary*0.08;
  float tax2 = 1000*0.08 + ((salary - 3000.00)*0.18);
  float tax3 = 1000*0.08 + 1500*0.18 + ((salary - 4500)*0.28);

  if(salary > 0 && salary <= 2000){
    printf("Isento\n");
  }else if(salary > 2000 && salary <= 3000){
    printf("R$ %.2f\n", tax1);
  }else if(salary > 3000 && salary <= 4500){
    printf("R$ %.2f\n", tax2);
  }else if(salary > 4500){
    printf("R$ %.2f\n", tax3);
  }

  return 0;
}
