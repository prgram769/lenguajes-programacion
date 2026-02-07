/*Escribe un programa que obtenga los números enteros comprendidos entre
dos números introducidos por teclado y validados como distintos, el programa
debe empezar por el menor de los enteros introducidos e ir incrementando de
7 en 7.*/

import java.util.Scanner;

public class LoopsEj18 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Tell me 2 diferent numbers: ");

    int number1 = read.nextInt();
    int number2 = read.nextInt();
    int smallerNumber;
    int biggerNumber;

    if (number1 == number2) {
      System.out.println("The numbers must be diferent.");
      
      read.close();

      return;
    } else if (number1 > number2) {
      smallerNumber = number2 + 1;
      biggerNumber = number1;
    } else {
      smallerNumber = number1 + 1;
      biggerNumber = number2;
    }

    for (int i = smallerNumber; i < biggerNumber; i += 7) {
      System.out.println(i);
    }

    read.close();
  }
}
