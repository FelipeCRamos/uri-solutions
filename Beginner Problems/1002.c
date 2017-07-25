/*
#include <stdio.h>
#include <stdlib.h>
int main(){
  float R;
  double pi = 3.14159;
  scanf("%f", &R);
  float A = pi*(R*R);
  printf("A=%.4f\n", A);

  return 0;
}
*/
#include <stdio.h>

int main() {
  double raio,area;
  scanf("%lf", &raio);
  area=3.14159*raio*raio;
  printf("A=%.4lf\n",area);
  return 0;
}
