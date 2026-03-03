/*Escribe un programa que genere 100 números aleatorios del 0 al 20 y que los
muestre por pantalla separados por espacios. El programa pedirá entonces
por teclado dos valores y a continuación cambiará todas las ocurrencias del
primer valor por el segundo en la lista generada anteriormente. Los números
que se han cambiado deben aparecer entrecomillados.*/

import java.util.Scanner;

public class Ej7 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    int[] nums = new int[100];

    for (int i = 0; i < nums.length; i++) {
      nums[i] = (int) (Math.random() * 21);
    }

    System.out.println("Before:\n");

    for (int i = 0; i < nums.length; i++) {
      System.out.print(nums[i] + " ");
    }

    System.out.print("\n\nEnter a number which you want to replace: ");

    int numberToReplace = read.nextInt();

    System.out.print("\nEnter a number to replace the number before: ");

    int newNumber = read.nextInt();

    System.out.println("\nAfter:");

    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == numberToReplace) {
        nums[i] = newNumber;

        System.out.printf("\"%d\" ", nums[i]);
      } else {
        System.out.print(nums[i] + " ");
      }
    }

    read.close();
  }
}
