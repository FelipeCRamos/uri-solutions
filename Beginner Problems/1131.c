/* 1131 - URI SOLUTION */
/* LINK: https://www.urionlinejudge.com.br/judge/en/problems/view/1131 */
/* MADE BY: FELIPECRAMOS */

#include <stdlib.h>
#include <stdio.h>

void novoGrenau(int *time1, int *time2, int *emp, int (*main)(), int *gre){
  int var1, var2;
  scanf("%i %i", &var1, &var2);
  // printf(">       var1: %i, var2: %i\n", var1, var2);
  if(var1 == var2) *emp += 1;
  else *time1 += var1, *time2 += var2;
  *gre += 1;
  main();
}

static int inter=0, gremio=0, empates=0, grenais=0;

int main(void) {
  // system("clear");
  int res;
  char lixo[5];
  printf("Novo grenal (1-sim 2-nao)\n");
  scanf("%i %s", &res, lixo);
  printf("~ res: %i, lixo: '%s'\n", res, lixo);
  if(res == 1 || res == 2){
    printf("~ entrou no if ~\n");
    if(res == 1){
      printf("~ entrou no case 1 ~\n");
      novoGrenau(&inter, &gremio, &empates, main, &grenais);
    }
    else if(res == 2){
      printf("~ entrou no case 2 ~\n");
      printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n", grenais, inter, gremio, empates);
      if(inter == gremio) printf("Não houve vencedor\n");
      else inter > gremio ? printf("Inter venceu mais\n") : printf("Gremio venceu mais\n");
      printf("~ antes do return no case 2 ~\n");
      return 0;
      printf("~ dps do return no case 2 ~\n");
    }
    else{
      printf("~ vai pro main() ~\n");
      main();
    }

  // switch (res) {
  //   case 1:
  //     printf("~ entrou no case 1 ~\n");
  //     novoGrenau(&inter, &gremio, &empates, main, &grenais);
  //   case 2:
  //     printf("~ entrou no case 2 ~\n");
  //     printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n", grenais, inter, gremio, empates);
  //     if(inter == gremio) printf("Não houve vencedor\n");
  //     else inter > gremio ? printf("Inter venceu mais\n") : printf("Gremio venceu mais\n");
  //     printf("~ antes do return no case 2 ~\n");
  //     return 0;
  //     printf("~ dps do return no case 2 ~\n");
  // }
  }
  // printf("~ vai pro main() ~\n");
  // main();

  return 0;
}
/*
> test case:
3 2
1
2 3
1
3 1
2

> waited answer:
Novo grenal (1-sim 2-nao)
Novo grenal (1-sim 2-nao)
Novo grenal (1-sim 2-nao)
3 grenais
Inter:2
Gremio:1
Empates:0
Inter venceu mais

Novo grenal (1-sim 2-nao)
Novo grenal (1-sim 2-nao)
Novo grenal (1-sim 2-nao)
3 grenais
Inter:2
Gremio:1
Empates:0
Inter venceu mais


*/
