/* 1146 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1146 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, i;
  do{
    scanf("%i", &x);
    for(i=1; i<=x; i++){
      (i!=x) ? printf("%i ", i) : printf("%i\n", i);
    }
  }while(x != 0);
  return 0;
}
