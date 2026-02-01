import java.util.Scanner;

public class ReadInfoScannerExample {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.println("What's your name?");

    String name = read.nextLine();
    
    System.out.println("Now, tell me your age please");

    int age = Integer.parseInt(read.nextLine());

    System.out.println("Your name is " + name + " and your age is " + age + " right?");

    read.close();
  }
}
