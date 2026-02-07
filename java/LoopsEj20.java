/*Igual que el ejercicio anterior pero esta vez se debe pintar una pirámide hueca.*/

import java.util.Scanner;

public class LoopsEj20 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter the hight in characters of the pyramid: ");

    int hight = read.nextInt();

    read.nextLine();

    System.out.print("Enter the character of the pyramid: ");

    String character = read.nextLine();

    for (int i = 0; i < hight; i++) {
      for (int spaces = 0; spaces < hight - i; spaces++) {
        System.out.print(" ");
      }

      for (int charac = 0; charac < (2 * i - 1); charac++) {
        if (charac == 0 || charac == (2 * i - 2) || i == hight - 1) {
          System.out.print(character);
        } else {
          System.out.print(" ");
        }
      }

      System.out.print("\n");
    }

    read.close();

  }
}
