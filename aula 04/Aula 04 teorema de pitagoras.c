#include <stdio.h>
#include <math.h> //Biblioteca para funções matemáticas

int main(void) {
  //Decalarar variáveis
  float a, b, c;

  //Entrada de Dados
  printf("Digite o valor de B: ");
  scanf("%f", &b);

  printf("Digite o valor de C: ");
  scanf("%f", &c);

  //Calculando valor de A
  a = sqrt((b*b) + (c*c));

  printf("O valor de A é: %.2f", a);
  return 0;
}