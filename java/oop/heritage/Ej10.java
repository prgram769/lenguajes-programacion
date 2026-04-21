// 10. Crea un ArrayList<Animal> que contenga instancias de Dog, Cat y Bird. Recorre la lista y llama a makeSound().

import java.util.ArrayList;

public class Ej10 {
  public static void main(String[] args) {
    ArrayList<Animal> myAnimalList = new ArrayList<>();

    Dog myDog = new Dog();
    Cat myCat = new Cat();
    Bird myBird = new Bird();

    myAnimalList.add(myDog);
    myAnimalList.add(myCat);
    myAnimalList.add(myBird);

    for (Animal animal : myAnimalList) {
      animal.makeSound();
    }
  }
}
