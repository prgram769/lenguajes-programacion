public class Cow extends Animal {
  public Cow(String type) {
    super(type);
  }

  @Override
  public void makeSound() {
    System.out.println("Muuu");
  }
}