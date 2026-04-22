// 1. Crea una clase Animal con el método makeSound(). Luego crea subclases Dog, Cat y Cow que sobrescriban ese método con sonidos diferentes. 
// Llama al método desde una lista de Animal.

public class Ej1 {
  public static void main(String[] args) {
    Animal myAnimal = new Animal();
    Dog myDog = new Dog();
    Cat myCat = new Cat();
    Cow myCow = new Cow();

    myAnimal.makeSound();
    myDog.makeSound();
    myCat.makeSound();
    myCow.makeSound();
  }
}