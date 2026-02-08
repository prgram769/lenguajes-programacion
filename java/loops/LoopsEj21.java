/*Realiza un programa que vaya pidiendo números hasta que se introduzca un
numero negativo y nos diga cuantos números se han introducido, la media de
los impares y el mayor de los pares. El número negativo sólo se utiliza para
indicar el final de la introducción de datos pero no se incluye en el cómputo.*/

import java.util.ArrayList;
import java.util.Scanner;

public class LoopsEj21 {
  public static void main(String[] args) {
    int number = 0;
    int biggerEven;
    int oddSum = 0;
    int oddCounter = 0;
    int oddAverage = 0;

    Scanner read = new Scanner(System.in);

    ArrayList<Integer> numberList = new ArrayList<>();

    while (number >= 0) {
      if (numberList.size() < 1) {
        System.out.println("Enter a number:");
      } else {
        System.out.println("Enter another number:");
      }

      number = read.nextInt();

      if (number < 0 && numberList.size() == 0) {
        System.err.println("You must enter positive numbers.");

        read.close();

        return;
      } else if (number < 0) {
        break;
      }

      numberList.add(number);

      if (number % 2 != 0) {
        oddCounter++;

        oddSum += number;
      }
    }

    biggerEven = numberList.get(0);

    for (Integer i : numberList) {
      if (i % 2 == 0 && biggerEven < i) {
        biggerEven = i;
      }
    }

    try {
      oddAverage = oddSum / oddCounter;

      System.out.println("The odd's average is " + oddAverage);
    } catch (Exception e) {
      System.out.println("There isn't any odd number in the list");
    }

    if (biggerEven % 2 == 0) {
      System.out.println("The bigger even is " + biggerEven);
    } else {
      System.out.println("There isn't any even number in the list");
    }

    read.close();
  }
}
