// 7. Crea una clase Rectangle con métodos para calcular el área y el perímetro.

public class Rectangle {
  double base;
  double height;

  public Rectangle(double base, double height) {
    this.base = base;
    this.height = height;
  }

  public void areaCalc() {
    double area = base * height;

    System.out.printf("Your area with your data is %.2f cm²\n", area);
  }

  public void perimeterCalc() {
    double perimeter = 2 * (base * height);

    System.out.printf("Your perimeter with your data is %.2f cm\n", perimeter);
  }
}
