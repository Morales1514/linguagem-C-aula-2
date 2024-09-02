#include <stdio.h>

int main(void) {
  float peso, altura, imc;

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  //exibir o resultado
  printf("Seu IMC é: %.2f\n", imc);

  if (imc < 18.5) {
    printf("Você está abaixo do peso.\n");
  } else if (imc >= 18.5 && imc < 25){
    printf("Você está com o peso normal.\n");
  } else if (imc >= 25 && imc < 30){
    printf("Você está com sobrepeso.\n");
  } else {
    printf("Classificação: Obeso.\n");
  }

  
  return 0;
}