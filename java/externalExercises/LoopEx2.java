// 2. Usa do-while para mostrar todos los valores de un ArrayList.

import java.util.ArrayList;
import java.util.Scanner;

public class LoopEx2 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.println("Enter 5 integer numbers:");

    ArrayList<Integer> numbers = new ArrayList<>();

    do {
      numbers.add(read.nextInt());
    } while (numbers.size() < 5);

    int i = 0;

    do {
      System.out.printf("%d,", numbers.get(i));

      i++;
    } while (i < 5);

    read.close();
  }
}
