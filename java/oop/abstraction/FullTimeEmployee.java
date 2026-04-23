package oop.abstraction;

public class FullTimeEmployee extends Employee {
  private double moneyPerHour;
  private int hours;
  private int days;

  public FullTimeEmployee(double moneyPerHour, int hours, int days) {
    this.moneyPerHour = moneyPerHour;
    this.hours = hours;
    this.days = days;
  }

  @Override
  public double calcSalary() {
    return moneyPerHour * hours * days;
  }
}