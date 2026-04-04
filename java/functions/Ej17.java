/*Escribe un programa que pase de binario a decimal.*/

import matematicas.Basics;

public class Ej17 {
  public static void main(String[] args) {
    int binaryNumber = Integer.parseInt(args[0]);
    int counter = 0;

    while (binaryNumber != 0) {
      binaryNumber /= 10;

      counter++;
    }

    int[] digits = new int[counter];

    binaryNumber = Integer.parseInt(args[0]);

    for (int i = 0; i < counter; i++) {
      digits[i] = binaryNumber % 10;

      binaryNumber /= 10;
    }

    int decimalCounter = 0;

    for (int i = 0; i < counter; i++) {
      if (digits[i] != 0 && digits[i] != 1) {
        decimalCounter++;
      }
    }

    if (decimalCounter == counter) {
      System.err.println("That number isn't a binary number.");

      return;
    }

    int decimalNumber = 0;

    for (int i = 0; i < counter; i++) {
      decimalNumber += digits[i] * Basics.powFunction(2, i);
    }

    System.out.println(decimalNumber);
  }
}
