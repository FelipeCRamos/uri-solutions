/* 1149 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1149 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a, n, i, sum=0;
  scanf("%i %i", &a, &n);
  while(n<=0){
    scanf("%i", &n);
  }
  for(i=a; i< a+n; i++){
    sum += i;
  }
  printf("%i\n", sum);
  return 0;
}
