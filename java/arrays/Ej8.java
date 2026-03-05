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

      temp[i - 1] = read.nextDouble();
    }

    System.out.println();

    for (int i = 0; i < temp.length; i++) {
      String month = "";

      switch (i) {
        case 0:
          month = "January";
          break;
        case 1:
          month = "February";
          break;
        case 2:
          month = "March";
          break;
        case 3:
          month = "April";
          break;
        case 4:
          month = "May";
          break;
        case 5:
          month = "June";
          break;
        case 6:
          month = "July";
          break;
        case 7:
          month = "August";
          break;
        case 8:
          month = "September";
          break;
        case 9:
          month = "October";
          break;
        case 10:
          month = "November";
          break;
        case 11:
          month = "December";
          break;
      }

      System.out.printf("%-10s|", month);

      for (int j = 0; j < temp[i]; j++) {
        System.out.print("*");
      }

      System.out.printf(" (%.2f)", temp[i]);

      System.out.println();
    }
    // Enero      | ██████████ (10)
    // Febrero    | █████████████████████████ (25)
    // Marzo      | ███████████████ (15)
    // Abril      | ██████████████████████████████ (30)

    read.close();
  }
}
