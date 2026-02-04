/*Realiza un programa que sume los 100 números siguientes a un número entero
y positivo introducido por teclado. Se debe comprobar que el dato introducido
es correcto (que es un número positivo).*/

public class LoopsEj17 {
  public static void main(String[] args) {
    System.out.println("Tell me one number");

    int staticNumber = Integer.parseInt(System.console().readLine());

    if (staticNumber < 0) {
      System.out.println("The number doesn't be negative");

      return;
    }

    int number = staticNumber;

    for (int i = staticNumber; i <= staticNumber + 100; i++) {
      System.out.println(number += i);
    }
  }
}
