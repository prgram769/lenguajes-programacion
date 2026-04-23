package oop.abstraction;

// 3. Define una clase abstracta Animal con el método makeSound(). Implementa Dog y Cat para que hagan sonidos distintos. 
// Crea un array de Animal para mostrar polimorfismo.

public class Ej3 {
  public static void main(String[] args) {
    Cat myCat = new Cat();
    Dog myDog = new Dog();

    myCat.makeSound();
    myDog.makeSound();

    Animal[] myAnimals = {myCat,myDog};

    for (Animal animal : myAnimals) {
      animal.makeSound();
    }
  } 
}