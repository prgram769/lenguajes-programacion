package oop.abstraction;

public class Invoice implements Payable {
  @Override
  public void pay() {
    System.out.println("The invoice was paid");
  }
}