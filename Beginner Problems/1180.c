#include <stdio.h>
int main(void){
  int n, i;
  scanf("%i", &n);
  int x[n];
  int menor, pos;
  for(i=0; i<n; i++){
    scanf("%i", &x[i]);
    if(i != 0){
      if(x[i] < x[i-1]){
        menor = x[i], pos = i;
      }
    }else{
      menor = x[i], pos = i;
    }
  }
  printf("Menor valor: %i\nPosicao: %i\n", menor, pos);
  return 0;
}
