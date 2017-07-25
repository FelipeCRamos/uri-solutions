#include <stdlib.h>
#include <stdio.h>
int main(void){
  int cases, i;
  scanf("%i", &cases);
  int number[cases];
  for (i=0; i<cases; i++){
    scanf("%i", &number[i]);
  }
  for (i=0; i<cases; i++){
    if(number[i] == 0)
      printf("NULL\n");
    else if(number[i] > 0){
      if(number[i]%2 == 0){
        printf("EVEN POSITIVE\n");
      }else{
        printf("ODD POSITIVE\n");
      }
    }
    else if(number[i] < 0){
      if(number[i]%2 == 0){
        printf("EVEN NEGATIVE\n");
      }else{
        printf("ODD NEGATIVE\n");
      }
    }
  }
  
  return 0;
}
