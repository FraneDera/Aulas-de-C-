#include <stdio.h>

// Fazendo o produto de dois números
int main() {
  // Declarando as variáveis
  int num1, num2, produto;
  printf("Digite o primeiro número: ");
  scanf(" %d", &num1);

  printf("Digite o segundo número: ");
  scanf(" %d", &num2);

  // Calculo do produto
  produto = num1 * num2;

  // Saida do resultado
  printf("O produto é: %d\n", produto);

  return 0;
}