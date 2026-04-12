// 7. Crea una clase Employee con el atributo privado salary. Agrega el método raiseSalary(double percent) que solo permita aumentos positivos.

public class Employee {
  private double salary;

  public Employee(double salary) {
    this.salary = salary;
  }

  public double getSalary() {
    return salary;
  }

  public void raiseSalary(double percent) {
    if (percent < 0) {
      System.err.println("The percent is lower than 0.");

      return;
    }

    double newSalary = salary * (percent * 0.01);

    this.salary = salary + newSalary;
  }
}
