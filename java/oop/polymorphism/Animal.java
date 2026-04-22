public class Animal {
  private String type;

  public Animal(String type) {
    this.type = type;
  }

  public String getType() {
    return this.type;
  }

  public void makeSound() {
    System.out.println("This is a generic sound");
  }
}