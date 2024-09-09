import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // Criando um objeto scanner para ler o teclado
    Scanner scanner = new Scanner(System.in);

    // Solicitando o nome do Usuário
    System.out.println("Digite seu nome:");
    String nome = scanner.nextLine();

    // Exibindo o que o usuário digitou no teclado
    System.out.println("Olá, " + nome + "!");

    // Solicitando o nome do Usuário
    System.out.println("Digite a sua idade:");
    String idade = scanner.nextLine();

    // Exibindo o que o usuário digitou no teclado
    System.out.println("Olá, " + nome + " Sua idade é " + idade);

    // Fechando o scanner
    scanner.close();

  }
}