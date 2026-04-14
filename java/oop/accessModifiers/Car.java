// 10. Crea una clase Car con el atributo privado speed. Agrega los métodos accelerate(int amount) que aumente la velocidad (máximo 120) y brake(int amount) que reduzca la velocidad (mínimo 0).

public class Car {
  private double speed;

  public double getSpeed() {
    return speed;
  }

  public void accelerate(double amount) {
    if (amount + speed > 120) {
      System.err.println("You mustn't exceed the speed limit.");

      return;
    }

    this.speed += amount;
  }

  public void brake(double amount) {
    if (amount <= 0) {
      System.err.println("You can't stop anymore.");

      return;
    }

    if (speed <= 0) {
      System.err.println("You can't stop anymore");

      return;
    }

    this.speed -= amount;

    if (this.speed < 0) {
      this.speed = 0;
    }
  }
}
