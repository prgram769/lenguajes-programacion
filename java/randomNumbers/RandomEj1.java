/*Escribe un programa que muestre la tirada de tres dados. Se debe mostrar
también la suma total (los puntos que suman entre los tres dados).*/

public class RandomEj1 {
  public static void main(String[] args) {
    int sum = 0;

    for (int i = 1; i <= 3; i++) {
      int number = (int) (Math.random() * 6 + 1);

      sum += number;

      System.out.printf("Dice %d: %d\n", i, number);
    }

    System.out.printf("\nThe sum of the dices is %d", sum);
  }
}
