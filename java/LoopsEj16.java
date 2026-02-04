/*Escribe un programa que diga si un número introducido por teclado es o no
primo. Un número primo es aquel que sólo es divisible entre él mismo y la
unidad*/

public class LoopsEj16 {
  public static void main(String[] args) {
    System.out.println("Tell me a number higher than 1 to check if it's prime");

    int number = Integer.parseInt(System.console().readLine());
    int counter = 0;

    if (number >= 1) {
      System.out.println("The number must be higher than 1");
      return;
    }

    for (int i = 1; i <= number; i++) {
      if (number % i == 0) {
        counter++;
      }
    }

    if (counter > 2) {
      System.out.println(number + " Isn't a prime number.");
    } else {
      System.out.println(number + " Is a prime number.");
    }
  }
}
