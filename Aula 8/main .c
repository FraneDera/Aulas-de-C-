#include <stdio.h>
#include <string.h>

int main(void) {
  // Declarando um ARRAY de STRINGS
  char string[100] = "TDS ";

  // Usando o STRLEN
  int tamanho = strlen(string);
  // printf("O tamanho da string é: %d\n", tamanho);

  // Usando o STRCPY
  char strCopy[100];
  strcpy(strCopy, string);
  // printf("Ola %s \n", strCopy);

  // Usando o STRCAT
  char str2[100] = "programando em 'C'";
  strcat(string, str2);
  // printf("Concatenação das strings: %s \n", string);

  // Usando o STRCMP
  int comparacao = strcmp(string, strCopy);
  // printf("Valor da comparação %d\n");
  if (comparacao == 0) {
    // printf("As strings são iguais\n");
  } else {
    // printf("As strings são diferentes\n");
  }

  // Como manipular ARRAYS
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("O tamanho do array é: %d\n", n);
  return 0;
}