/*Escribe un programa que pase de decimal a binario.*/

public class Ej18 {
  public static void main(String[] args) {
    int decimalNumber = Integer.parseInt(args[0]);
    int counter = 0;

    while (decimalNumber != 0) {
      decimalNumber /= 10;

      counter++;
    }

    decimalNumber = Integer.parseInt(args[0]);

    int binaryNumber = 1;

    while (decimalNumber != 1) {
      binaryNumber = decimalNumber % 2;

      decimalNumber %= 2;

      binaryNumber *= 10;
    }

    System.out.println(binaryNumber);
  }
}
