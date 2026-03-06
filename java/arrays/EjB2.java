/*Escribe un programa que pida 20 números enteros. Estos números se deben
introducir en un array de 4 filas por 5 columnas. El programa mostrará las
sumas parciales de filas y columnas igual que si de una hoja de cálculo se
tratara. La suma total debe aparecer en la esquina inferior derecha.*/

import java.util.Scanner;

public class EjB2 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    int[][] nums = new int[4][5];

    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums[0].length; j++) {
        System.out.print("Enter a number: ");

        nums[i][j] = read.nextInt();
      }
    }

    // for (int i = 0; i < nums.length; i++) {
    // for (int j = 0; j < nums[0].length; j++) {
    // System.out.println(nums[i][j]);
    // }
    // }

    for (int r = 0; r < nums.length; r++) {
      for (int c = 0; c < nums[0].length; c++) {
        System.out.printf("%10d", nums[r][c]);
      }
      System.out.printf("%3s %5s %d", "| ", "Row ", r);

      System.out.println();
    }

    read.close();
  }
}
