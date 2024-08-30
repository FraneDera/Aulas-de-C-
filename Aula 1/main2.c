#include <stdio.h>

int main() {
  // Declarando as variaveis
  int num1, num2, soma;

  // Entrada de Dados
  printf("Digite o primeiro numero: ");
  scanf(" %d", &num1);

  printf("Digite o segundo numero: ");
  scanf(" %d", &num2);

  // Calculando a soma
  soma = num1 + num2;

  // Saida de Resultado
  printf("A soma de %d e %d é %d", num1, num2, soma);
}
