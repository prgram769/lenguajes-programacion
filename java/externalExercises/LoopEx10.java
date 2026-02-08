// 10. Crea un programa que calcule el factorial de un número dado.

public class LoopEx10 {
  public static void main(String[] args) {
    int number = 4;
    int factorial = 1;

    for (int i = 1; i <= number; i++) {
      factorial *= i;
    }

    System.out.printf("The factorial of the number 4 is: %d", factorial);
  }
}
