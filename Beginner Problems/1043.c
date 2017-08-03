/* 1043 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1043 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
  float a,b,c,perm,area;
  scanf("%f %f %f", &a, &b, &c);
  if(a+b>c && b+c>a && a+c>b){
      perm=a+b+c;
      printf("Perimetro = %.1f\n",perm);
  }else{
    area=0.5*(a+b)*c;
    printf("Area = %.1f\n", area);
  }
return 0;
}
