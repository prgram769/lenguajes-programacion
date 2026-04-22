public class Cat extends Animal {
  public Cat(String type) {
    super(type);
  }
  
  @Override
  public void makeSound() {
    System.out.println("Meow");
  }
}