#include <stdio.h>

int main(void) {
  // declarando a variaveis
  float num1, num2, num3, media;

  // entrada de dados
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o primeiro número: ");
  scanf("%f", &num2);

  printf("Digite o primeiro número: ");
  scanf("%f", &num3);

  // calculo de média
  media = (num1 + num2 + num3) / 3;

  // Exibindo resultados
  printf("A média dos três números é: %.2f\n", media);

  return 0;
}