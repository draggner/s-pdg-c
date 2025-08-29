#include <stdio.h>

int main(){

  char nome[50];
  int idade;
  char genero[10];

  printf("Informe Nome Completo:\n");
  scanf("%s", nome);

  printf("Informe Idade:\n");
  scanf("%d", &idade);

  printf("Informe Gênero:\n");
  scanf("%s", genero);

  printf("\n\n");
  printf("Nome Completo: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Gênero: %s\n", genero);

  return 0;
}
