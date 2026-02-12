/*Realiza un programa que pida un número por teclado y que luego muestre ese
número al revés.*/

import java.util.Scanner;

public class LoopsEj25 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter a number with at least 2 digits: ");

    String numberString = read.nextLine();

    if (numberString.length() < 2) {
      System.err.println("You must enter valid data.");
      
      read.close();

      return;
    }
    
    System.out.print("The number of the setback is: ");

    for (int i = numberString.length(); i > 0; i--) {
      System.out.print(numberString.charAt(i - 1));
    }

    read.close();
  }
}
