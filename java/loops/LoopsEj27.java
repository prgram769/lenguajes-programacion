/*Escribe un programa que muestre, cuente y sume los múltiplos de 3 que hay
entre 1 y un número leído por teclado.*/

import java.util.Scanner;

public class LoopsEj27 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter a number: ");

    int number = read.nextInt();
    int counter = 0;
    int sum = 0;

    for (int i = 1; i < number; i++) {
      if (i % 3 == 0) {
        System.out.println("One multiple of 3 is: " + i);

        counter++;

        sum += i;
      }
    }

    System.out.printf("The amount of multiples of 3 since 1 to %d are %d numbers and the sum of them is %d", number, counter, sum);

    read.close();
  }
}
