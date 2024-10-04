#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Definindo estrutura para armasenar os dados dos clientes
struct Cliente{
    char nome[100];
    char endereco[150];
    char idade;
    char cidade[50];
    char estado[50];
    char telefone[15];
};

int main(void) {
  struct Cliente cliente;
  FILE *arquivo;
  
  printf("********Cadrastro do cliente********:\n ");

  //Solicitando o nome do cliente
  printf("Digite o nome do cliente:\n ");
  fgets(cliente.nome, 100, stdin);
  cliente.nome[strcspn(cliente.nome,"\n")] = '\0';
  
  //Solicitando a idade do cliente
  printf("Digite a idade do cliente:\n ");
  scanf("%d", &cliente.idade,"\n");
  getchar(); // LImpando o valor de memoria do scanf
  
  //Solicitando o endereço do cliente
  printf("Digite o endereço do cliente:\n ");
  fgets(cliente.endereco, 150, stdin);
  cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';
  
  //Salvando os dados no arquivo
  arquivo = fopen("clientes.txt", "a");
  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }
  //Gravando os dados no arquivo
  fprintf(arquivo, "Nome: %s\n  Idade: %d\n Endereco: %s\n" , cliente.nome, cliente.idade , cliente.endereco);
  fclose(arquivo);
  printf("Dados salvos com sucesso!\n");

  //Solicitando a cidade do cliente
 // printf("Digite a cidade do cliente:\n ");
  //fgets(cliente.cidade, 50, stdin);
  //cliente.cidade[strcspn(cliente.cidade, "\n")] = '\0';

  //Solicitando o estado do cliente
 // printf("Digite o estado do cliente:\n ");
  //fgets(cliente.estado, 50, stdin);
  //cliente.estado[strcspn(cliente.estado, "\n")] = '\0';

  //Solicitando o telefone do cliente
 // printf("Digite o telefone do cliente:\n ");
  //fgets(cliente.telefone, 15, stdin);
  //cliente.telefone[strcspn(cliente.telefone, "\n")] = '\0';
  
  //Imprimindo os dados do cliente
  printf("********Dados do cliente********:\n ");
  printf("Nome: %s", cliente.nome);
  printf("Idade: %d\n", cliente.idade);
  printf("Endereço: %s", cliente.endereco);
  
  return 0;
}