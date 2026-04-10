// 8. Crea una clase Worker que reciba nombre y salario, y un método para mostrar su salario.

public class Worker {
  String name;
  double salary;

  public Worker(String name, double salary) {
    this.name = name;
    this.salary = salary;
  }

  public void showSalary() {
    System.out.printf("My name is %s and my salary is %.2f\n", name, salary);
  }
}
