/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double A, B, C = 0;
  scanf("%lf %lf %lf", &A, &B, &C);
  double delta = (pow(B, 2))-4*A*C;
  double r1 = (-B + sqrt(delta))/2*A;
  double r2 = (-B - sqrt(delta))/2*A;
  printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);

//  printf("%f %f %f\n", A, B, C);
}
*/
#include<stdio.h>
#include<math.h>

int main()

{
  double a,b,c,r1,r2,del;
  scanf("%lf %lf %lf",&a,&b,&c);
  del=(b*b)-(4*a*c);
  r1=(-b+sqrt(del))/(2*a);
  r2=(-b-sqrt(del))/(2*a);
  if(a!=0 && del>0){
    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
  }
  else printf("Impossivel calcular\n");
  return 0;
}
