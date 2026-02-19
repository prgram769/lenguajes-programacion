/*Escribe un programa que muestre tres apuestas de la quiniela en tres colum-
nas para los 14 partidos y el pleno al quince (15 filas).*/

public class RandomEj7 {
  public static void main(String[] args) {
    for (int i = 0; i < 15; i++) {
      int number = (int)(Math.random() * 2 + 1);

      System.out.println(number);
    }
  }
}
