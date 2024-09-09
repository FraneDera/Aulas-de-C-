import java.util.Scanner;
//Somando dois números

public class Main {
  public static void main(String[] args) {
    // Criando um objeto Scanner
    Scanner scanner = new Scanner(System.in);

    // Digite o primeiro Número
    System.out.println("Digite o primeiro número: ");
    double num1 = scanner.nextDouble();

    // Digite o segundo Número
    System.out.println("Digite o segundo número: ");
    double num2 = scanner.nextDouble();

    // Somando os dois números
    double soma = num1 + num2;

    // Exibindo o resultado
    System.out.println("A soma é: " + soma);

    // Fechando o Scanner
    scanner.close();
  }
}