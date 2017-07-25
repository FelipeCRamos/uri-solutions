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
