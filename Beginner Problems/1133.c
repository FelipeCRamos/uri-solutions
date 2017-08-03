/* 1133 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1133 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int x, y, i;
  scanf("%i %i", &x, &y);
  if(x > y){
    for(i=y+1; i<x; i++){
      if(i % 5 == 2 || i % 5 == 3){
        printf("%i\n", i);
      }
    }
  }else{
    for(i=x+1; i<y; i++){
        if(i % 5 == 2 || i % 5 == 3){
        printf("%i\n", i);
      }
    }
  }
  return 0;
}
