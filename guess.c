#include <stdio.h> //printf, puts, scanf
#include <stdlib.h> //srand, rand
#include <time.h> // time


int main() {

  srand(time(NULL));

  int number = rand() % 11;
  int entry;

  printf("Adivinhe o Número\n");
  scanf("%d", &entry);

  if (entry == number){
    printf("Acertou!\n");
  } else {
    printf("Errou, é %d\n", number);
  }

  return 0;
}
