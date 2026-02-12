/*Realiza un programa que pida primero un número y a continuación un dígito.
El programa nos debe dar la posición (o posiciones) contando de izquierda a
derecha que ocupa ese dígito en el número introducido.*/

import java.util.Scanner;

public class LoopsEj26 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter a number: ");
    
    String stringNumber = read.nextLine();

    System.out.print("Enter a digit of the number previously entered: ");

    String numberDigit = read.nextLine();

    if (!stringNumber.contains(numberDigit)) {
      System.out.println("The digit isn't in the number.");

      read.close();

      return;
    }

    for (int i = 0; i < numberDigit.length(); i++) {
      if (stringNumber.contains(numberDigit)) {
        System.out.printf("The digit in the number take up the %d position or the %dº digit of the number", stringNumber.indexOf(numberDigit), stringNumber.indexOf(numberDigit) + 1);
      }
    }

    read.close();
  }
}
