#include stdio.h;

int main(){
  int number1, number2, operation;

  printf("Informe o primeiro número:\n");
  scanf("%d", $number1);

  printf("\nEstas são as operações possíveis:\n");

  puts("\t 1. Somar");
  puts("\t 2. Subtração");
  puts("\t 3. Multiplicação");
  puts("\t 4. Divisão");

  printf(">>\n");
  scanf("\d", operation);

  printf("Informe o segundo número: \n");
  scanf("%d", &number2);


  return 0;
}
