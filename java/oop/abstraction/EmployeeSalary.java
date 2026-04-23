package oop.abstraction;

public class EmployeeSalary implements Payable {
  @Override
  public void pay() {
    System.out.println("The employee was paid");
  }
}