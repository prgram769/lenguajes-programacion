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

    for (int i = 0; i < map.length; i++) {
      for (int j = 0; j < map[0].length; j++) {
        if (map[i][j] == 2) {
          coordenates[0] = i;
          coordenates[1] = j;
        }

        System.out.printf("%d ", map[i][j]);
      }

      System.out.println();
    }
    try {
      if (coordenates[0] == map.length - 1 || coordenates[0] == 0 || coordenates[1] == map[0].length - 1 || coordenates[1] == 0) {
        if (coordenates[0] == 0) {
          if (map[coordenates[0] + 1][coordenates[0]] == 1 || map[coordenates[0]][coordenates[1] - 1] == 1 || map[coordenates[0]][coordenates[1] + 1] == 1) {
            System.out.println("bomba");
          }
        }
        System.out.println("s");
      }
    } catch (Exception e) {
      System.err.println(e);
    }

    System.out.println(coordenates[0]);
    System.out.println(coordenates[1]);

    read.close();
  }
}
