// 4. Recorre un Array de 5 números e imprime la suma total.

public class LoopEx4 {
  public static void main(String[] args) {
    int[] numbers = {5, 6, 7, 8, 2};
    
    int sum = 0;

    for (int i : numbers) {
      System.out.println(i);

      sum += i;
    }

    System.out.printf("\nThe sum is %d", sum);
  }
}
