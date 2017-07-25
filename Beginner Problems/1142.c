#include <stdio.h>

int main(void){
  int number, i, j=1;
  scanf("%i", &number);
  for(i=0; i<number; i++){
    printf("%i %i %i PUM\n", j, j+1, j+2);
    j += 4;
  }
  return 0;
}
