#include <stdio.h>

int main() {
  char none[50]; // array para armazenar o nome"string"
  int idade;     // variavel inteira para idade
  float altura;  // variavel inteira para altura

  // entrada do usuário
  printf("Digite seu nome: ");
  fgets(none, sizeof(none), stdin); // le a entrada do usuario
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  // saida de dados
  printf("\n--------------Dados informados----------\n");
  printf("Nome: %s", none);
  printf("Idade : %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  return 0;
}