/* 1117 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1117 */
/* MADE BY: FELIPECRAMOS */

#include <stdio.h>
void perguntar(int (*main)()){
  printf("novo calculo (1-sim 2-nao)\n");
  int res;
  scanf("%i", &res);
  switch (res) {
    case 1:
      main();
    case 2:
      return;
    default:
      perguntar(main);
  }
};
int main(void){
  double nota, sum=0, cont=0;
  while(1){
    if(cont==2)
        break;
    scanf("%lf", &nota);
    if(nota>=0 && nota<=10){
      cont++;
      sum += nota;
    }
    else printf("nota invalida\n");
  }
  printf("media = %.2lf\n", sum/2.00);
  perguntar(main);
  return 0;
}
