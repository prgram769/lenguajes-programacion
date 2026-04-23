package oop.abstraction;

public class PartTimeEmployee extends Employee {
  private double moneyPerDay;
  private int days;
  
  public PartTimeEmployee(double moneyPerDay, int days) {
    this.days = days;
    this.moneyPerDay = moneyPerDay;
  }

  @Override
  public double calcSalary() {
    return moneyPerDay * days;
  }
}