/*Escribe un programa que muestre por pantalla todos los números enteros
positivos menores a uno leído por teclado que no sean divisibles entre otro
también leído de igual forma.*/

import java.util.Scanner;

public class LoopsEj29 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter a higher number: ");

    int number = read.nextInt();

    System.out.print("Enter other name to divide: ");

    int divideNumber = read.nextInt();

    for (int i = 0; i <= number; i++) {
      if (i % divideNumber != 0) {
        System.out.printf("One number: %d\n", i);
      }
    }

    read.close();
  }
}
