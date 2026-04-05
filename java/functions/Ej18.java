/*Escribe un programa que pase de decimal a binario.*/

public class Ej18 {
  public static int log2(int number) {
    int result = (int) (Math.log(number) / Math.log(2));

    return result;
  }

  public static void main(String[] args) {
    int decimalNumber = Integer.parseInt(args[0]);
    int binaryNumberLength = log2(decimalNumber) + 1;

    int[] binaryDigits = new int[binaryNumberLength];

    for (int i = 0; i < binaryDigits.length; i++) {
      binaryDigits[i] = decimalNumber % 2;

      decimalNumber /= 2;
    }

    long binaryFinalNumber = 0;

    for (int j = binaryDigits.length - 1; j >= 0; j--) {
      binaryFinalNumber *= 10;
    
      binaryFinalNumber += binaryDigits[j];
    }

    System.out.println(binaryFinalNumber);
  }
}
