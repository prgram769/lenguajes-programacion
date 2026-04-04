/*Muestra los números primos que hay entre 1 y 1000.*/

import matematicas.Basics;

public class Ej15 {

  public static void main(String[] args) {
    for (int i = 2; i <= 1000; i++) {
      if (Basics.isPrime(i) == true) {
        System.out.println(i);
      }
    }
  }
}
