// 7. Crea una función showAnimalType(Animal animal) que imprima el tipo de animal. 
// Pasa diferentes subclases (Dog, Cat, Horse) para que cada una imprima su tipo con su propio getType() sobrescrito.

public class Ej7 {
  public static void main(String[] args) {
    Animal myAnimal = new Animal("Generic");
    Dog myDog = new Dog("Mammal");
    Cat myCat = new Cat("Mammal");
    Horse myHorse = new Horse("Mammal");

    showAnimalType(myAnimal);
    showAnimalType(myCat);
    showAnimalType(myDog);
    showAnimalType(myHorse);
  }
  
  public static void showAnimalType(Animal animal) {
    System.out.println(animal.getType());
  }
}