// 9. Crea una clase Student con el atributo privado grade. Agrega los métodos setGrade(int grade) y isPassed() que retorne true si la nota es mayor o igual a 60.

public class Student {
  private int grade;

  public Student(int grade) {
    this.grade = grade;
  }

  public int getGrade() {
    return grade;
  }

  public void setGrade(int grade) {
    this.grade = grade;
  }

  public Boolean isPassed() {
    if (grade < 60) {
      return false;
    }

    return true;
  }
}
