/* 1073 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1073 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
  int j=0 ,i=0, n = 0;
  scanf("%i", &n);
  int contador[n];
  for(j=0; j<=n; j++){
    contador[j] = j+1;
  }
  for(i=0; contador[i]<=n; i++){
    if(contador[i]%2==0){
      printf("%i^2 = %i\n", contador[i], contador[i]*contador[i]);
    }
  }
}
