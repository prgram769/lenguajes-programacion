/*Realiza un programa que pinte una pirámide por pantalla. La altura se debe
pedir por teclado. El carácter con el que se pinta la pirámide también se debe
pedir por teclado.*/

import java.util.Scanner;

public class LoopsEj19 {
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
        System.out.print(character);

      }

      System.out.print("\n");
    }

    read.close();
  }
}
