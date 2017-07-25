#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
  int num1, num2, num3;
  scanf("%i %i %i", &num1, &num2, &num3);
  int m1, m2, m3;

  //Ordenai-vos m1
  if(num1<num2 && num1 < num3){
    m1 = num1;
  }else{
    if(num2<num1 && num2<num3){
      m1 = num2;
    }else{
      if(num3<num1 && num3<num2){
        m1 = num3;
      }
    }
  }
  if(num1>num2 && num1 > num3){
    m3 = num1;
  }else{
    if(num2>num1 && num2 > num3){
      m3 = num2;
    }else{
      if(num3>num1 && num3>num2){
        m3 = num3;
      }
    }
  }
  if(num1>m1 && num1<m3){
    m2 = num1;
  }else{
    if(num2>m1 && num2<m3){
      m2 = num2;
    }else{
      if(num3>m1 && num3<m3){
        m2=num3;
      }
    }
  }


  printf("%i\n%i\n%i\n\n", m1, m2, m3);
  printf("%i\n%i\n%i\n", num1, num2, num3);
}
