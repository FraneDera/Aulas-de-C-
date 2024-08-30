#include <stdio.h>

// Fazendo o produto de dois números
float main() {
  // Declarando as variáveis
  float num1, num2, divisao;
  printf("Digite o primeiro número: ");
  scanf(" %f", &num1);

  printf("Digite o segundo número: ");
  scanf(" %f", &num2);

  // Calculo da Divisão
  divisao = num1 / num2;

  // Saida do resultado
  printf("O produto é: %f\n", divisao);

  return 0;
}