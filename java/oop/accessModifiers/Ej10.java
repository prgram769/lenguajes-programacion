public class Ej10 {
  public static void main(String[] args) {
    Car myCar = new Car();

    System.out.println(myCar.getSpeed());

    myCar.accelerate(12.3);

    System.out.println(myCar.getSpeed());

    myCar.brake(2);

    System.out.println(myCar.getSpeed());

    myCar.brake(20);

    System.out.println(myCar.getSpeed());

    myCar.accelerate(2000);

    System.out.println(myCar.getSpeed());

    myCar.brake(0);

    System.out.println(myCar.getSpeed());
  }
}
