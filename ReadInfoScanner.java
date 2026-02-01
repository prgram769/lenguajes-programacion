import java.util.Scanner;

public class ReadInfoScanner {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.println("Tell me your age please:\n");

    int age = Integer.parseInt(read.nextLine());

    if (age < 18) {
      System.out.println("\nYou mustn't enter in this building");
    } else {
      System.out.println("\nWelcome");
    }

    read.close();
  }
}
