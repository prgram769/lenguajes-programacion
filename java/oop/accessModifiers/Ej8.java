public class Ej8 {
  public static void main(String[] args) {
    Rectangle myRectangle = new Rectangle(23.4, 16.4);

    System.out.println(myRectangle.calculateArea());

    myRectangle.setWidth(2.3);
    myRectangle.setHeight(1.6);

    System.out.println(myRectangle.calculateArea());
  }
}
