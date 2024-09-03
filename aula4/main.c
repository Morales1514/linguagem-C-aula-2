#include <math.h>
#include <stdio.h>

int main() {

  float a, b, c;
  printf("Digite o valor de b: ");
  scanf("%f", &b);

  printf("Digite o valor de c: ");
  scanf("%f", &c);

  a = sqrt((b * b) + (c * c));

  printf("A hipotenusa do triângulo é: %.1f\n", a);
  return 0;
}