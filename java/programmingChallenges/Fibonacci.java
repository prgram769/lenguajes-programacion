/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

public class Fibonacci {
  public static void main(String[] args) {
    int n1 = 0;
    int n2 = 1;

    for (int i = 0; i < 50; i++) {
      System.out.println(n1);

      int temp = n1 + n2;

      n1 = n2;
      n2 = temp;
    }
  }
}
