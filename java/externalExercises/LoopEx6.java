//6. Usa for-each para recorrer un HashSet y un HashMap.

import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;

public class LoopEx6 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    int option;

    System.out.println("Choose 1 or 2. 1.HashSet example. 2.HashMap example.");

    option = read.nextInt();

    if (option == 1) {
      HashSet<Integer> numbers = new HashSet<>();

      System.out.println("You must enter 5 numbers:");

      for (int i = 0; i < 5; i++) {
        numbers.add(read.nextInt());
      }

      System.out.println("You have entered the following numbers:");

      for (Integer i : numbers) {
        System.out.println(i);
      }
    } else if (option == 2) {
      HashMap<String, String> capitalCountries = new HashMap<>();

      read.nextLine();

      System.out.println("You must enter 3 countries with its capital:");

      for (int i = 0; i <= 2; i++) {
        System.out.println("Country:");

        String country = read.nextLine();

        System.out.println("Capital:");

        String capital = read.nextLine();

        capitalCountries.put(country, capital);
      }

      System.out.println("You have entered the following countries with its capitals:");

      for (String i : capitalCountries.keySet()) {
        System.out.println("key: " + i + " value: " + capitalCountries.get(i));
      }

    } else {
      System.err.println("You must enter valid data.");

      read.close();

      return;
    }

    read.close();
  }
}
