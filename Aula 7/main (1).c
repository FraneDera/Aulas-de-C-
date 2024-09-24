#include <stdio.h>
#include <string.h>


int main(void) {
 char (palavraSecreta, "MELANCIA");
  int totalLetras = strlen(palavraSecreta);

  int acertou = 0;
  int enforcou = 0;
  char chutes[20];
  int tentativas = 0;

  //abertura do jogo 
  printf("--Bem vindo ao jogo da forca--\n");
  printf("Digite uma letra\n");

  do{
    for (int i = 0; i < totalLetras; i++){
      int achou = 0;
      for(int j = 0; j < tentativas; j++){
        if(chutes[j] == palavraSecreta[i]);
        achou = 1;
        break;
      }
    }
    if(achou) {
      printf("%c", palavraSecreta[i]);
    }else{
      printf("_ ");
    }
  
    prinf("\n");
  char chute;
  scanf(" %c", &chute);
  tentativas++;
  chutes[tentativas] = chute;
  
}while(!acertou && !enforcou)
  
    return 0;
}