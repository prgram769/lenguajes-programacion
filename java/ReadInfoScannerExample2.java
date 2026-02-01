import java.util.Scanner;

public class ReadInfoScannerExample2 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter your name and your age: ");

    String name = read.next();

    int age = read.nextInt();

    System.out.println("Your name is " + name + " and your age " + age);

    read.close();
  }
}
