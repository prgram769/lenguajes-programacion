public class Rectangle extends Shape {
  private double base;
  private double hight;

  public Rectangle(double base, double hight) {
    this.base = base;
    this.hight = hight;
  }

  @Override
  public double calculateArea() {
    return base * hight;
  }
}