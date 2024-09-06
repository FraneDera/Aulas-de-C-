#include <stdio.h> 
// Versao 1 do game Adivinhaçao
// Criando uma mensagem inicial
// Definir as variaveis 
// Criar o laço de tentativas com as verificaçoes
int main() 
{ printf("------Welcome to the game----\n");
 printf("Descubra meu numero secreto em 3 tentativas\n");
 printf("Meu numero esta entre 0 e 10\n"); 
 printf("\n*************************\n");
 //---------------------------------------------------Variaveis
 int numeroSecreto = 7;
 int chute;
 //---------Iniciando o For 
 for(int i = 1; i <= 3; i++) { 
     printf("Qual é o seu chute"); 
  scanf("%d", &chute);
  // Verificando o chute digitado
  int acertou = (chute == numeroSecreto); 
  int maior = (chute > numeroSecreto); 
  int menor = (chute < numeroSecreto); 
  
    if (acertou) { 
        printf("Parabens! Voce acertou o numero Secreto\n");
        break; 
    } else if (maior) {
         printf("Seu chute foi maior que o numero Secreto \n");
     } else if (menor) {
        printf("Seu chute foi menor que o numero \n");
    }
 }
 printf("Fim das tentativas\n");
     return 0;
}