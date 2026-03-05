/*Define un array de números enteros de 3 filas por 6 columnas con nombre num
y asigna los valores según la siguiente tabla. Muestra el contenido de todos
los elementos del array dispuestos en forma de tabla como se muestra en la
figura.*/

public class EjB1 {
  public static void main(String[] args) {
    int[][] num = new int[3][6];

    num[0][0] = 0;
    num[0][1] = 30;
    num[0][2] = 2;
    num[0][5] = 5;
    num[1][0] = 75;
    num[1][4] = 0;
    num[2][2] = -2;
    num[2][3] = 9;
    num[2][5] = 11;

    System.out.print("Array num ");

    for (int c = 0; c < num[0].length; c++) {
      System.out.printf("%-11s", "Column " + c);
    }

    System.out.println();
    
    for (int r = 0; r < num.length; r++) {
      System.out.printf("%-5s %d %-3s", "Row", r, "|");

      for (int c = 0; c < num[0].length; c++) {
        System.out.printf("%-11d", num[r][c]);
      }

      System.out.println();
    }
  }
}
