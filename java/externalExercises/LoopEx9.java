// 9. Usa break para detener un bucle cuando encuentres un número negativo en un array.

public class LoopEx9 {
  public static void main(String[] args ) {
    double[] numbers = {2.5, 2, 5, 1.4, 74, 6, -2, 7, 10};

    for (int i = 0; i < numbers.length; i++) {
      if (numbers[i] < 0) {
        break;
      }

      System.out.println(numbers[i]);
    }
  }
}
