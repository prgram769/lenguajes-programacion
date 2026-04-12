// 5. Crea una clase Temperature con el atributo privado celsius. El método setCelsius(double celsius) solo debe aceptar valores entre -100 y 100.

public class Temperature {
  private double degrees;

  public Temperature(double degrees) {
    this.degrees = degrees;
  }

  public double getTemperature() {
    return degrees;
  }

  public void setTemperature(double degrees) {
    if (degrees < -100) {
      System.err.println("The temperature is lower than -100ºC");

      return;
    } else if (degrees > 100) {
      System.err.println("The temperature is higher than 100ºC");

      return;
    }

    this.degrees = degrees;
  }
}
