/*Escribe un programa que lea un número n e imprima una pirámide de números
*con n filas como en la siguiente figura:
*   1
*  121
* 12321
*1234321*/

import java.util.Scanner;

public class LoopsEjExtra24 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter the number of the rows of the pyramid: ");

    int rows = read.nextInt();

    for (int i = 0; i < rows; i++) {
      for (int spaces = 0; spaces < rows - i; spaces++) {
        System.out.print(" ");
      }

      for (int charac = 0; charac < (2 * i - 1); charac++) {
        if (charac < i) {
          System.out.print(charac + 1);
        } else if (charac >= i) {
          System.out.print(2 * i - charac - 1);
        }
      }

      System.out.print("\n");
    }

    read.close();
  }
}
