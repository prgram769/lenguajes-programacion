// 2. Crea una clase Shape con el método calculateArea(). Luego implementa subclases Circle y Rectangle con sus propias fórmulas. 
// Usa una lista de Shape para recorrer e imprimir el área de varias figuras.

public class Ej2 {
  public static void main(String[] args) {
    Shape myShape = new Shape();
    Circle myCircle = new Circle();
    Rectangle myRectangle = new Rectangle();

    myShape.calculateArea();

    myCircle.calculateArea();
    System.out.println(myCircle.calculateArea(2));
    System.out.println(myCircle.calculateArea(4.5));

    myRectangle.calculateArea();
    System.out.println(myRectangle.calculateArea(3, 5));
    System.out.println(myRectangle.calculateArea(2.3, 4.4));
  }
}