// 8. Usa continue para saltar los múltiplos de 3 del 1 al 20.

public class LoopEx8 {
  public static void main(String[] args) {
    for (int i = 1; i <= 20; i++) {
      if (i % 3 == 0) {
        continue;
      }

      System.out.println(i);
    }
  }
}
