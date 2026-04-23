package oop.abstraction;

public class TV extends Appliance {
  @Override
  public void turnOn() {
    System.out.println("The TV is on");
  }

  @Override
  public void turnOff() {
    System.out.println("The TV is off");
  }
}