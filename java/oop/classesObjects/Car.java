// 4. Crea una clase Car con atributos brand y model y un método showData().

public class Car {
  String brand;
  String model;

  public Car(String brand, String model) {
    this.brand = brand;
    this.model = model;
  }

  public void showData() {
    System.out.printf("My car is a %s model %s", brand, model);
  }
}
