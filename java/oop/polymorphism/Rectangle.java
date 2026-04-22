public class Rectangle extends Shape{
  @Override
  public void calculateArea() {
    System.out.println("This is a calculate area function from rectangle without parameters");
  }

  public int calculateArea(int base, int hight) {
    return base * hight;
  }

  public double calculateArea(double base, double hight) {
    return base * hight;
  }
}
