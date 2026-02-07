/*Realiza un programa que vaya pidiendo números hasta que se introduzca un
numero negativo y nos diga cuantos números se han introducido, la media de
los impares y el mayor de los pares. El número negativo sólo se utiliza para
indicar el final de la introducción de datos pero no se incluye en el cómputo.*/

import java.util.ArrayList;
import java.util.Scanner;

public class LoopsEj21 {
  public static void main(String[] args) {
    System.out.println("Enter a number");

    Scanner read = new Scanner(System.in);

    double number = read.nextDouble();

    if (number < 0) {
      return;
    }

    ArrayList<Double> numbers = new ArrayList<Double>();

    numbers.add(number);

    int counter = 1;

    while (number >= 0) {
      System.out.println("Enter other number:");

      number = read.nextDouble();

      numbers.add(number);

      counter++;
    }

    double sum = 0;

    for (Double i : numbers) {
      if (i % 2 != 0) {
        sum += i;
      }
    }

    double oddAverage = sum / counter;

    System.out.println("The odd average is " + oddAverage);
  }
}
