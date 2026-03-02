/*Define tres arrays de 20 números enteros cada una, con nombres numero,
cuadrado y cubo. Carga el array numero con valores aleatorios entre 0 y 100. En el
array cuadrado se deben almacenar los cuadrados de los valores que hay en el
array numero. En el array cubo se deben almacenar los cubos de los valores que
hay en numero. A continuación, muestra el contenido de los tres arrays dispuesto
en tres columnas.*/

public class Ej4 {
  public static void main(String[] args) {
    // FIRST VERSION

    int[] num = new int[20];
    int[] square = new int[20];
    int[] cube = new int[20];

    for (int i = 0; i < num.length; i++) {
      num[i] = (int) (Math.random() * 101);
    }

    for (int i = 0; i < square.length; i++) {
      square[i] = (int) Math.pow(num[i], 2);
    }

    for (int i = 0; i < cube.length; i++) {
      cube[i] = (int) Math.pow(num[i], 3);
    }

    for (int r = 0; r < num.length; r++) {
      System.out.printf("%d\t%d\t%d\n", num[r], square[r], cube[r]);
    }

    //Simple:

    // for (int r = 0; r < num.length; r++) {
    //   System.out.print(num[r] + "\t");
    //   System.out.print(square[r] + "\t");
    //   System.out.print(cube[r]);
    //   System.out.println();
    // }

    // SECOND VERSION WITH BIDIMENSIONAL ARRAY

  //   int[][] numbers = new int[20][3];
  //
  //   for (int i = 0; i < numbers.length; i++) {
  //     numbers[i][0] = (int)(Math.random() * 101);
  //   }
  //   for (int i = 0; i < numbers.length; i++) {
  //     numbers[i][1] = (int)Math.pow(numbers[i][0], 2);
  //   }
  //   for (int i = 0; i < numbers.length; i++) {
  //     numbers[i][2] = (int)Math.pow(numbers[i][0], 3);
  //   }
  //
  //   for (int r = 0; r < numbers.length; r++) {
  //     for (int c = 0; c < 3; c++) {
  //       System.out.print(numbers[r][c] + "\t");
  //     }
  //     System.out.println();
  //   }
  }
}
