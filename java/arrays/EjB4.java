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
    int bombs = mines;
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
    // try {
    //   int[][] bombStorage = new int[bombs][1];
    //   int[] bombsCoords = new int[2];
    //
    //   int bombCounter = 0;
    //
    //   for (int r = 0; r < map.length; r++) {
    //     for (int c = 0; c < map[0].length; c++) {
    //       if (map[r][c] == 1) {
    //         bombsCoords[0] = r;
    //         bombsCoords[1] = c;
    //
    //         bombStorage[bombCounter] = bombsCoords;
    //         bombCounter++;
    //       }
    //     }
    //   }
    //
    //   bombCounter = 0;
    //
    //   while (bombCounter != bombs) {
    //     if (bombsCoords[0] == coordenates[0] - 1 && bombsCoords[1] == coordenates[1] || bombsCoords[0] == coordenates[0] + 1 && bombsCoords[1] == coordenates[1] || bombsCoords[1] == coordenates[1] - 1 || bombsCoords[1] == coordenates[1] + 1) {
    //       System.out.println("There is a bomb near.");
    //     }
    //
    //     bombCounter++;
    //   }

    for (int r = 0; r < map.length; r++) {
      for (int c = 0; c < map[0].length; c++) {
        System.out.print("X ");
      }

      System.out.println();
    }
    
    System.out.println("Tell me the coordenates where you want search the treasure:");

    int[] userCoordenates = new int[2];

    System.out.print("Row: ");

    userCoordenates[0] = read.nextInt();

    System.out.print("Column: ");

    userCoordenates[1] = read.nextInt();

    int opportunities = 3;

    for (int r = 0; r < map.length; r++) {
      for (int c = 0; c < map[0].length; c++) {
      }
    }
    while (opportunities != 0) {
      if (userCoordenates[0] == coordenates[0] && userCoordenates[1] == coordenates[1]) {
        System.out.println("Congratulations, you find the treasure.");

        read.close();

        return;
      }

      System.out.printf("Your coordenates aren't right. You still have %d opportunities.\n", opportunities);
      System.out.print("Enter new row: ");

      userCoordenates[0] = read.nextInt();

      System.out.print("Enter new column: ");

      userCoordenates[1] = read.nextInt();

      opportunities--;
    }
    // TODO necesito hacer que me pida unas coordenadas y me verifique si es el premio, ademas si en una casilla de alrededor hay minas que me diga que hay una mina cerca y ademas que el usuario tenga 3 intentos

    //   System.out.printf("Row: %d, Column: %d\n", bombsCoords[0], bombsCoords[1]);
    // } catch (Exception e) {
    //   System.err.println(e);
    // }

    System.out.println(coordenates[0]);
    System.out.println(coordenates[1]);

    read.close();
  }
}
