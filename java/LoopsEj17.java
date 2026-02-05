/*Realiza un programa que sume los 100 números siguientes a un número entero
y positivo introducido por teclado. Se debe comprobar que el dato introducido
es correcto (que es un número positivo).*/

public class LoopsEj17 {
  public static void main(String[] args) {
    System.out.print("Tell me one number ");

    int staticNumber = Integer.parseInt(System.console().readLine());

    if (staticNumber < 0) {
      System.out.println("The number doesn't be negative");

      return;
    }

    int sum = 0;

    System.out.println("You want the sum in each iteration or a single at the end? 1.Sum in each iteration. 2.A single at the end.");

    int option = Integer.parseInt(System.console().readLine());

    if (option == 1) {
      for (int i = staticNumber + 1; i <= staticNumber + 100; i++) {
        sum += i;

        System.out.println(sum);
      }

    } else if (option == 2) {
      for (int i = staticNumber + 1; i <= staticNumber + 100; i++) {
        sum += i;
      }

      System.out.println("The final sum is " + sum);

    } else {
      System.out.println("You musn't introduce other number other than 1 or 2");
    }

  }
}
