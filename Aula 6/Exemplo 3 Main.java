import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Digite o primeiro número:");
    double num1 = scanner.nextDouble();

    System.out.println("Digite o segundo número:");
    double num2 = scanner.nextDouble();

    double divisao = num1 / num2;
    System.out.println("A divisão é " + divisao);

    // Multiplicação

    double multiplicacao = num1 * num2;
    System.out.println("A multiplicação é " + multiplicacao);

    scanner.close();

  }

}