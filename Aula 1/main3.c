#include <stdio.h>

int main() {
  // Declarando ás variaveis
  float num1, num2, num3, media;

  // Entrada de Dados
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  printf("Digite o terceiro número: ");
  scanf("%f", &num3);

  // Calculo da Média
  media = (num1 + num2 + num3) / 3;
}