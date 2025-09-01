#include <stdio.h>

int main() {

  int number1, number2, operation;

  puts("Calculadora Simples - v1.1");
  puts("References - Tales");
  puts("by Draggner");

  do {
    puts("\n Estas são as operações possíveis:\n");
    puts("\t 1. Somar");
    puts("\t 2. Subtração");
    puts("\t 3. Multiplicação");
    puts("\t 4. Divisão");

    puts("\t 5. Sair");

    puts(">>");
    scanf("%d", &operation);

    if (operation == 5) {
      break;
    }

    printf("Informe o primeiro número: \n");
    scanf("%d", &number1);

    printf("Informe o segundo número:\n");
    scanf("%d", &number2);

    if (operation == 1) {
     printf("%d + %d = %d\n", number1, number2, (number1 + number2));
    } else if (operation == 2) {
     printf("%d - %d = %d\n", number1, number2, (number1 - number2));
    } else if (operation == 3) {
     printf("%d * %d = %d\n", number1, number2, (number1 * number2));
    } else if (operation == 4) {
     printf("%d / %d = %d\n", number1, number2, (number1 / number2));
    }  else {
      puts("OPERAÇÃO INVÁLIDA, TENTE NOVAMENTE!");
    }
  } while (operation != 5);

  return 0;
}
