/*Escribe un programa que muestre tres apuestas de la quiniela en tres colum-
nas para los 14 partidos y el pleno al quince (15 filas).*/

public class RandomEj7 {
  public static void main(String[] args) {
    int betCounter = 1;

    for (int i = 0; i < 3; i++) {
      System.out.printf(" ".repeat(5) + "|--Bet %d--|", betCounter);

      betCounter++;
    }

    System.out.println();

    for (int rows = 0; rows < 14; rows++) {
      for (int columns = 0; columns < 3; columns++) {
        int randomNumberCol = (int) (Math.random() * 3);

        if (randomNumberCol == 0) {
          System.out.printf(" ".repeat(10) + "X" + "\t");

        } else {
          System.out.printf(" ".repeat(10) + randomNumberCol + "\t");
        }
      }
      System.out.println();

      if (rows == 13) {
        for (int i = 0; i < 3; i++) {
          System.out.printf(" ".repeat(6) + "|-Full-|" + "\t");
        }

        System.out.println();

        for (int i = 0; i < 3; i++) {
          int randomNumberFull = (int) (Math.random() * 3);

          if (randomNumberFull == 0) {
            System.out.printf(" ".repeat(10) + "X" + "\t");
          } else {
            System.out.printf(" ".repeat(10) + randomNumberFull + "\t");
          }
        }
      }
    }
  }
}
