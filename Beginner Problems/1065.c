#include<stdlib.h>
#include<stdio.h>
int main(){
  int value[5] = {0};
  int par = 0, i = 0;
  for(i=0; i<5; i++){
    scanf("%i", &value[i]);
    //printf("%i\n", value[i]);
    if(value[i]%2==0){
      par++;
    }
  }
  printf("%i valores pares\n", par);
  return 0;
}
