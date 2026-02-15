/*Realiza un programa que pinte la letra L por pantalla hecha con asteriscos. El
programa pedirá la altura. El palo horizontal de la L tendrá una longitud de la
mitad (división entera entre 2) de la altura más uno.
Ejemplo:
Introduzca la altura de la L: 5
*
*
*
*
* * *
*/

import java.util.Scanner;

public class LoopsEj31 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter the hight of the L: "); 

    int hight = read.nextInt();

    for (int i = 1; i < hight; i++) {
      System.out.println("*");

      if (i == hight) {
        System.out.print("*");
      }
    }

    int length = hight / 2 + 1;

    for (int i = 0; i < length; i++) {
      System.out.print("*");
    }

    read.close();
  }
}
