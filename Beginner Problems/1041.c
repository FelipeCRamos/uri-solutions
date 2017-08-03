/* 1041 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1041 */
/* MADE BY: FELIPECRAMOS */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  double x, y;
  scanf("%lf %lf", &x, &y);
  // printf("X=%lf Y=%lf\n", x, y);
  // Se X = 0: Eixo X
  if(x != 0 && y == 0){
    printf("Eixo X\n");
  }else{
    if(y != 0 && x == 0){
      printf("Eixo Y\n");
    }else{
      if(x == 0 && y == 0){
        printf("Origem\n");
      }else{
        // agora começa
        //q1 = x > 0 && y > 0
        if(x > 0 && y > 0){printf("Q1\n");}
        //q2 = x < 0 && y > 0
        if(x < 0 && y > 0){printf("Q2\n");}
        //q3 = x < 0 && y < 0
        if(x < 0 && y < 0){printf("Q3\n");}
        //q4 = x > 0 && y < 0
        if(x > 0 && y < 0){printf("Q4\n");}
      }
    }
  }
}
