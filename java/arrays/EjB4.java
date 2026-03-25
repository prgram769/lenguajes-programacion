/*Mejora el juego “Busca el tesoro” de tal forma que si hay una mina a una casilla
de distancia, el programa avise diciendo ¡Cuidado! ¡Hay una mina cerca!*/

import java.util.Scanner;

public class EjB4 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("How many rows do you want? ");

    int rows = read.nextInt();

    System.out.print("How many columns do you want? ");

    int columns = read.nextInt();

    System.out.print("How many mines do you want? ");

    int mines = read.nextInt();
    int treasure = 1;

    int[][] map = new int[rows][columns];

    for (int r = 0; r < map.length; r++) {
      for (int c = 0; c < map[0].length; c++) {
        map[r][c] = (int) (Math.random() * 3);
      }
    }

    for (int r = 0; r < map.length; r++) {
      for (int c = 0; c < map[0].length; c++) {
        if (map[r][c] == 2) {
          treasure--;

          if (treasure < 0) {
            map[r][c] = (int) (Math.random() * 2);
          }
        }

        if (map[r][c] == 1) {
          mines--;

          if (map[r][c] == 1 && mines < 0) {
            map[r][c] = 0;
          }
        }

      }
    }

    int[] coordenates = new int[2];

    for (int r = 0; r < map.length; r++) {
      for (int c = 0; c < map[0].length; c++) {
        if (map[r][c] == 2) {
          coordenates[0] = r;
          coordenates[1] = c;
        }

        // System.out.printf("%d ", map[r][c]);
      }

      // System.out.println();
    }

    for (int r = 0; r < map.length; r++) {
      for (int c = 0; c < map[0].length; c++) {
        System.out.print("X ");
      }

      System.out.println();
    }

    System.out.println("Tell me the coordenates where you want search the treasure:");

    int[] userCoordenates = new int[2];

    int opportunities = 3;

    // for (int i = 0; i < map.length; i++) {
    //   for (int j = 0; j < map[0].length; j++) {
    //     if (i == 0 || i == map.length - 1 || j == 0 || j == map[0].length - 1) {
    //       System.out.print("X ");
    //     } else {
    //       System.out.print(". ");
    //     }
    //   }
    //   System.out.println();
    // }

    while (opportunities != 0) {
      System.out.print("Enter new row: ");

      userCoordenates[0] = read.nextInt();

      System.out.print("Enter new column: ");

      userCoordenates[1] = read.nextInt();

      if (userCoordenates[0] == coordenates[0] && userCoordenates[1] == coordenates[1]) {
        System.out.println("Congratulations, you find the treasure.");

        read.close();

        return;
      }

      System.out.printf("Your coordenates aren't right. You still have %d opportunities.\n", opportunities - 1);

      Boolean mineNear = false;

      try {
        if (userCoordenates[0] > 0 && map[userCoordenates[0] - 1][userCoordenates[1]] == 1) {
          mineNear = true;
        }

        if (userCoordenates[0] < map.length - 1 && map[userCoordenates[0] + 1][userCoordenates[1]] == 1) {
          mineNear = true;
        }

        if (userCoordenates[1] > 0 && map[userCoordenates[0]][userCoordenates[1] - 1] == 1) {
          mineNear = true;
        }

        if (userCoordenates[1] < map[0].length && map[userCoordenates[0]][userCoordenates[1] + 1] == 1) {
          mineNear = true;
        }
      } catch (Exception e) {
      }

      if (mineNear == true) {
        System.out.println("There are bombs near.");
      }

      opportunities--;
    }

    System.out.println(coordenates[0]);
    System.out.println(coordenates[1]);

    read.close();
  }
}
