/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */

import java.util.Scanner;

public class PolygonArea {
  public static double polygonCalc(String polygon) {
    Scanner read = new Scanner(System.in);

    if (polygon == "triangle") {
      System.out.print("Ok, to calc the area I need the base in cm and the hight also in cm: ");

      double base = read.nextDouble();
      double hight = read.nextDouble();

      double triangleArea = base * hight / 2;

      read.close();

      return triangleArea;
    } else if (polygon == "square") {
      System.out.print("Ok, to calc the area I need the size in cm of one of the sides: ");

      double side = read.nextDouble();

      double squareArea = side * side;

      read.close();

      return squareArea;
    } else {
      System.out.print("Ok, to calc the area I need the base in cm and the hight also in cm: ");

      double base = read.nextDouble();
      double hight = read.nextDouble();

      double rectangleArea = base * hight / 2;
      
      read.close();

      return rectangleArea;
    }
  }

  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.printf("Tell me, which polygon do you want to calc the area for?\n1.Triangle. 2.Square. 3.Rectangle.\n");

    int option = read.nextInt();

    switch (option) {
      case 1:
        double triangleArea = polygonCalc("triangle");

        System.out.printf("The area of your triangle is %.2f cm²", triangleArea);

        break;
      case 2:
        double squareArea = polygonCalc("square");

        System.out.printf("The area of your square is %.2f cm²", squareArea);

        break;
      case 3:
        double rectangleArea = polygonCalc("rectangle");

        System.out.printf("The area of your rectangle is %.2f cm²", rectangleArea);

        break;
      default:
        System.err.println("You must enter valid data.");

        break;
    }

    read.close();
  }
}
