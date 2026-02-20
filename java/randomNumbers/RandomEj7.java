/*Escribe un programa que muestre tres apuestas de la quiniela en tres colum-
nas para los 14 partidos y el pleno al quince (15 filas).*/

public class RandomEj7 {
  public static void main(String[] args) {
    int betCounter = 1;
    int localCounter = 0;
    int visitorCounter = 0;

    for (int i = 0; i < 3; i++) {
      System.out.printf(" ".repeat(5) + "|--Bet %d--|", betCounter);

      betCounter++;
    }

    System.out.println();

    for (int i = 0; i < 14; i++) {
      for (int j = 0; j < 3; j++) {
        int randomNumberCol = (int) (Math.random() * 3);

        if (randomNumberCol == 2) {
          visitorCounter++;
        } else if (randomNumberCol == 1) {
          localCounter++;
        }

        if (randomNumberCol == 0) {
          System.out.printf(" ".repeat(10) + "X" + "\t");

        } else {
          System.out.printf(" ".repeat(10) + randomNumberCol + "\t");
        }
      }

      System.out.println();
    }

    int spaces = 3;

    for (int i = 0; i < 3; i++) {
      System.out.printf(" ".repeat(spaces) + "|-Full fifteen-|");


      spaces--;
    }
  }
}
