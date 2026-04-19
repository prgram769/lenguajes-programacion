// 4. La clase Employee tiene los atributos name y salary. Manager hereda de Employee y agrega el atributo department.

public class Ej4 {
  public static void main(String[] args) {
    Employee myEmployee = new Employee("Mariano", 1202.34);

    Manager myManager = new Manager("Francisco", 2345.24, "Sales");

    System.out.printf("My employee %s earn %.2f dollars per month\n", myEmployee.getName(), myEmployee.getSalary());

    System.out.printf("My manager of %s department whose name is %s earn %.2f dollars per month\n", myManager.getDepartment(), myManager.getName(), myManager.getSalary());
  }
}
