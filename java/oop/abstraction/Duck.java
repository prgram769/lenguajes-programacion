package oop.abstraction;

public class Duck implements Swimmable, Flyable {
  @Override
  public void swim() {
    System.out.println("The duck is swimming");
  }

  @Override
  public void fly() {
    System.out.println("The duck is flying");
  }
}