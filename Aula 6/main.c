#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Versão 02 do jogo
// Criar msg inicial
// Definir as variaveis
// Criar um loop para o jogo

int main() {
  printf("_____ BEM VINDO AO JOGO DA ADIVINHAÇÃO _____\n");
  printf("\n");
  printf("DESCUBRA O NÚMERO QUE ESTOU IMAGINANDO\n");
  printf("_______________________________________________\n");
  printf("O NÚMERO ESTÁ ENTRE 0 E 10\n");
  printf("VOCÊ TEM 3 TENTATIVAS, BOA SORTE!!!\n");
  printf("_______________________________________________\n");

  //----------------------------------------------------//
    
    //Gerando um número aleatório
    int segundos = time(0);
    srand(segundos);

    int numero = rand();
    int numeroSecreto = numero % 100;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    //Construindo o loop
    while(ganhou == 0){
        printf("___ Tentativa %d ___\n", tentativas);
        printf("Chute um número: ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numeroSecreto);
        int maior = (chute > numeroSecreto);

    //Verificando os valores do chute
    if(acertou){
        printf("\n Na mosca !!!\n");
        ganhou = 1;
    } else if (maior){
        printf("\n O número secreto é menor\n");
    } else {
        printf("\n O número secreto é maior\n");
    }
    tentativas ++;
    }
       return 0;
}
