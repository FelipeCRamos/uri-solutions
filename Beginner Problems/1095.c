/* 1095 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1095 */
/* MADE BY: FELIPECRAMOS */

#include<stdlib.h>
#include<stdio.h>
int main(){
    int i = 1, j;
    for(j = 60; j >= 0; j -= 5){
      printf("I=%i J=%i\n", i, j);
      i+=3;
    }
return 0;
}
