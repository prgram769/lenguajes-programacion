public class Ej5 {
  public static void main(String[] args) {
    Temperature myTemperature = new Temperature(4);

    System.out.println(myTemperature.getTemperature());

    myTemperature.setTemperature(34);

    System.out.println(myTemperature.getTemperature());

    myTemperature.setTemperature(-101);

    System.out.println(myTemperature.getTemperature());

    myTemperature.setTemperature(101);

    System.out.println(myTemperature.getTemperature());
  }
}
