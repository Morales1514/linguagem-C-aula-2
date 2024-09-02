#include <stdio.h>

int main() {
  char nome[50]; // Arrey para armazenar o nome
  int idade;     // variavel inteira para idade
  float altura;  // variavel float para altura

  // entradas do usuario
  printf("Digite o seu nome: ");
  fgets(nome, sizeof(nome), stdin); // le a entrada do usuario
  printf("Digite sua idade :  ");
  scanf("%d", &idade) s;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  // saida dos dados
  printf("\n----------Dados informados----------\n");
  printf("Nome: %s", nome);
  printf("Idade: %d   anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  return 0;
}