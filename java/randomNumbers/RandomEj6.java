/*Escribe un programa que piense un número al azar entre 0 y 100. El usuario
debe adivinarlo y tiene para ello 5 oportunidades. Después de cada intento
fallido, el programa dirá cuántas oportunidades quedan y si el número intro-
ducido es menor o mayor que el número secreto.*/

import java.util.Scanner;

public class RandomEj6 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    int randomNumber = (int)(Math.random() * 101);
    int opportunities = 5;

    while (opportunities != 0) {
      System.out.print("Enter a number: ");

      int userNumber = read.nextInt();

      read.nextLine();

      if (userNumber > randomNumber) {
        opportunities--;

        System.out.printf("Your number is higher than the secret number. You still have %d opportunities.\n", opportunities);
      } else if (userNumber < randomNumber) {
        opportunities--;

        System.out.printf("Your number is lower than the secret number. You still have %d opportunities.\n", opportunities);
      } else {
        System.out.println("Congratulations!! That is the secret number.");

        break;
      }
    }

    System.out.printf("The secret number was %d", randomNumber);

    read.close();
  }
}
