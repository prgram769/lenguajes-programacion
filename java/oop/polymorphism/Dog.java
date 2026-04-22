public class Dog extends Animal {
  public Dog(String type) {
    super(type);
  }

  @Override
  public void makeSound() {
    System.out.println("Guau");
  }
}