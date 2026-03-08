/*Realiza un programa que rellene un array de 6 filas por 10 columnas con
números enteros positivos comprendidos entre 0 y 1000 (ambos incluidos).
A continuación, el programa deberá dar la posición tanto del máximo como
del mínimo.*/

public class EjB3 {
  public static void main(String[] args) {
    int[][] nums = new int[6][10];

    int min = 0;
    int max = 0;

    for (int r = 0; r < nums.length; r++) {
      for (int c = 0; c < nums[0].length; c++) {
        nums[r][c] = (int) (Math.random() * 1001);
      }
    }

    min = nums[0][0];
    max = nums[0][0];

    int[] maxCoordinates = new int[2];
    int[] minCoordinates = new int[2];

    for (int r = 0; r < nums.length; r++) {
      for (int c = 0; c < nums[0].length; c++) {
        if (nums[r][c] > max) {
          max = nums[r][c];

          maxCoordinates[0] = r;
          maxCoordinates[1] = c;
        }

        if (nums[r][c] < min) {
          min = nums[r][c];

          minCoordinates[0] = r;
          minCoordinates[1] = c;
        }
      }
    }

    System.out.printf("The max number is %d and his coordinates are row %d and column %d\n", max, maxCoordinates[0], maxCoordinates[1]);
    System.out.printf("The min number is %d and his coordinates are row %d and column %d\n", min, minCoordinates[0], minCoordinates[1]);
  }
}
