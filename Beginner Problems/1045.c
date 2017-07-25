#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  // ordenalos
  int ladoC, ladoB, ladoA;
  if(a>b && a>c){
    ladoA = a;
    ladoB = b;
    ladoC = c;
  }else{
    if(b>a && b>c){
      ladoA = b;
      ladoB = a;
      ladoC = c;
    }else{
      if(c>a && c>b){
        ladoA = c;
        ladoB = b;
        ladoC = a;
      }else{
        if(a==b || a==c){
          ladoA = a;
          ladoB = b;
          ladoC = c;
        }else{
          if(b==c){
            ladoA = b;
            ladoB = a;
            ladoC = c;
          }
        }
      }
    }
  }
  /// começar as operações
  if((a == b) && (a == c)){
    printf("TRIANGULO EQUILATERO\n");
  }
  if(ladoA*ladoA == ladoB*ladoB + ladoC*ladoC){
    printf("TRIANGULO RETANGULO\n");
  }
  if(ladoA*ladoA > ladoB*ladoB + ladoC*ladoC){
    printf("TRIANGULO OBTUSANGULO\n");
  }
  if(ladoA*ladoA < ladoB*ladoB + ladoC*ladoC){
    printf("TRIANGULO ACUTANGULO\n");
  }
  if(ladoA == ladoB || ladoA==ladoC || ladoB == ladoC){
    printf("TRIANGULO ISOSCELES\n");
  }
  return 0;
}
