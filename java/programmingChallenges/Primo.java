/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */

public class Primo {
  public static void main(String[] args) {
    for (int i = 1; i <= 100; i++) {
      int counter = 0;

      for (int j = 1; j <= i; j++) {
        if (i % j == 0) {
          counter++;
        }
      }

      if (counter == 2) {
        System.out.printf("%d is prime\n", i);
      } else {
        System.out.printf("%d isn't prime\n", i);
      }
    }
  }
}
