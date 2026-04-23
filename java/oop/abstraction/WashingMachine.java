package oop.abstraction;

public class WashingMachine extends Appliance {
  @Override
  public void turnOff() {
    System.out.println("The washing machine is off");
  }

  @Override
  public void turnOn() {
    System.out.println("The washing machine is on");
  }
}