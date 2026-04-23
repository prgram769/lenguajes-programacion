package oop.abstraction;

public class Robot implements Movable {
  @Override
  public void move() {
    System.out.println("The robot is moving");
  }
}