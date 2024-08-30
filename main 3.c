#include <stdio.h>

int main() {
  // Declarando as Váriaveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // Variável que recebe a soma dos inteiros
  int i;          // Interador do for
                  // entrada de dados: preenchendo o array
  printf("Digite os 5 números do Array: \n");
  for (i = 0; i < 5; i++) {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }
  // Calculo dos elementos do array
  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }
  // Exibindo o resultado
  printf("A soma dos números é: %d\n", soma);

  return 0;
}