#include <stdio.h>

int main(){
  int number1, number2, operation;

  printf("Informe o primeiro número:\n");
  scanf("%d", &number1);

  printf("\nEstas são as operações possíveis:\n");

  puts("\t 1. Somar");
  puts("\t 2. Subtração");
  puts("\t 3. Multiplicação");
  puts("\t 4. Divisão");

  printf(">>\n");
  scanf("%d", &operation);

  printf("Informe o segundo número:\n");
  scanf("%d", &number2);

// Verificações e Resultados das Operações

  if (operation == 1) {
    printf("%d + %d = %d\n", number1, number2,
      (number1 + number2));
  } else if (operation == 2) {
    printf("%d - %d = %d\n", number1, number2,
      (number1 - number2));
  } else if (operation == 3) {
    printf("%d * %d = %d\n", number1, number2,
      (number1 * number2));
  } else if (operation == 4) {
    printf("%d / %d = %d\n", number1, number2,
      (number1 / number2));
  } else {
    puts("OPERAÇÃO INVÁLIDA, TENTE NOVAMENTE!");
  }

  return 0;
}
