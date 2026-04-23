package oop.abstraction;

// 8. Crea dos interfaces Flyable y Swimmable. Crea una clase Duck que implemente ambas interfaces y muestre cómo puede volar y nadar.

public class Ej8 {
  public static void main(String[] args) {
    Duck myDuck = new Duck();

    myDuck.fly();
    myDuck.swim();
  } 
}