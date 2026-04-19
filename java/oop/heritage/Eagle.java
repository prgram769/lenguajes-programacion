public class Eagle extends Bird{
  @Override
  public void fly() {
    System.out.println("The eagle is flying");
  }

  public void birdFly() {
    super.fly();
  }
}
