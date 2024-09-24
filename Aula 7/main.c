#include <stdio.h>
#include <string.h>

int main(void) {
  char palavraSecreta[20];
  sprintf(palavraSecreta, "NEYMAR");

  int acertou = 0;
  int enforcou = 0;
  int numeroDeLetras = strlen(palavraSecreta);

  printf("A palvra posssui %d letras", numeroDeLetras);

  do {
    // iniciando o jogo
    printf("Digite uma letra: ");
    char chute;
    scanf("%c", &chute);
    
    int i = 0;
    for (i = 0; i < numeroDeLetras; i++) {
      if (palavraSecreta == chute) {
        printf("A posição %d tem essa letra", i);
      }
    }
  } while (!acertou && !enforcou);
  return 0;
}