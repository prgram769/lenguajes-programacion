package oop.abstraction;

// 5. Crea una clase abstracta Employee con un método calculateSalary().
// Implementa FullTimeEmployee y PartTimeEmployee con lógica diferente para calcular el salario.

public class Ej5 {
  public static void main(String[] args) {
    FullTimeEmployee myFullTimeEmployee = new FullTimeEmployee(23.4, 8, 30);
    PartTimeEmployee myPartTimeEmployee = new PartTimeEmployee(60, 23);

    System.out.println(myFullTimeEmployee.calcSalary());
    System.out.println(myPartTimeEmployee.calcSalary());
  }  
}