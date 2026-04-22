public class Circle extends Shape {
  @Override
  public void calculateArea() {
    System.out.println("This is a calculate area function from circle without parameter");
  }

  public int calculateArea(int radius) {
    return (int)Math.PI * Math.powExact(radius, 2);
  }

  public double calculateArea(double radius) {
    return Math.PI * Math.pow(radius, 2);
  }
}
