/*Escribe un programa que lea una lista de diez números y determine cuántos
son positivos, y cuántos son negativos.*/

import java.util.ArrayList;

public class LoopsEj13 {
  public static void main(String[] args) {
    ArrayList<Integer> myNumberList = new ArrayList<Integer>();

    for (int i = 0; i < 10; i++) {
      System.out.println("Introduce one number:");

      myNumberList.add(Integer.parseInt(System.console().readLine()));
    }

    int negativeCounter = 0;
    int positiveCounter = 0;

    for (int i : myNumberList) {
      if (i < 0) {
        negativeCounter++;
      } else {
        positiveCounter++;
      }
    }

    if (negativeCounter == 1) {
      System.out.println("There is an only negative number in your list.");
    } else if (negativeCounter == 0) {
      System.out.println("There isn't any negative number in your list.");
    } else {
      System.out.println("There are " + negativeCounter + " numbers in your list.");
    }

    if (positiveCounter == 1) {
      System.out.println("There is an only positive number in your list.");
    } else if (positiveCounter == 0) {
      System.out.println("There isn't any positive number in your list.");
    } else {
      System.out.println("There are " + positiveCounter + " numbers in your list.");
    }
  }
}
