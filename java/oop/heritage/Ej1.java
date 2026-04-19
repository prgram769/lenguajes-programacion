// 1. Crea una clase Vehicle con un método move(). Luego crea una subclase Car que herede de Vehicle y agrega el método honk().

public class Ej1 {
  public static void main(String[] args) {
    Vehicle myVehicle = new Vehicle();

    myVehicle.move();

    Car myCar = new Car();

    myCar.move();
    myCar.honk();
  }
}
