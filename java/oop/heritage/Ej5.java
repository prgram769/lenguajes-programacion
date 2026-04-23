// 5. Crea una clase abstracta Shape con un método calculateArea(). Luego implementa ese método en Circle y Rectangle.

public class Ej5 {
  public static void main(String[] args) {
    Shape myCircle = new Circle(2.4);
    Shape myRectangle = new Rectangle(3.2,4.2);

    System.out.println(myCircle.calculateArea());
    System.out.println(myRectangle.calculateArea());
  }
}