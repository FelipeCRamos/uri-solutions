#include <stdio.h>
int main(void){
  int x, y, i, sum = 0;
  scanf("%i %i", &x, &y);
  if (y < x){
    for(i = y+1; i < x; i++){
      if(i%2 != 0){
        sum += i;

      }
    }
  }else if (x < y){
    for(i=x+1; i<y; i++){
      if(i%2 != 0){
        sum += i;

      }
    }
  }
  printf("%i\n", sum);
  return 0;
}
