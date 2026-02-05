/*Escribe un programa que obtenga los números enteros comprendidos entre
dos números introducidos por teclado y validados como distintos, el programa
debe empezar por el menor de los enteros introducidos e ir incrementando de
7 en 7.*/

public class LoopsEj18 {
  public static void main(String[] args) {
    System.out.println("Tell me 2 diferent numbers: ");

    int number1 = Integer.parseInt(System.console().readLine());
    int number2 = Integer.parseInt(System.console().readLine());

    if (number1 == number2) {
      System.out.println("The numbers must be diferent.");

      return;
    }

    for (int i = 0; i <= 1; i++) {

    }
  }
}
