public class Student extends Person {
  private double grade;

  public Student(String name, int age, double grade) {
    super(name, age);
    this.grade = grade;
  }

  public void study() {
    System.out.printf("%s is studying", getName());
  }

  public double getGrade() {
    return this.grade;
  }
}
