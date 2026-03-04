/*Realiza un programa que pida la temperatura media que ha hecho en cada mes
de un determinado año y que muestre a continuación un diagrama de barras
horizontales con esos datos. Las barras del diagrama se pueden dibujar a base
de asteriscos o cualquier otro carácter.*/

import java.util.Scanner;

public class Ej8 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    double[] temp = new double[12];

    for (int i = 1; i <= temp.length; i++) {
      System.out.printf("Enter the average temperature of the %d month: ", i);

      temp[i] = read.nextDouble();
    }

    // TODO hacer el grafico mediante un bucle interior y otro exterior de forma que pueda tener un grafico horizontal

    // Enero      | ██████████ (10)
    // Febrero    | █████████████████████████ (25)
    // Marzo      | ███████████████ (15)
    // Abril      | ██████████████████████████████ (30)

    read.close();
  }
}
