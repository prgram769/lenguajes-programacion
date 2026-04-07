// 5. Crea una clase Student con atributo score y un método que diga si aprobó (mayor o igual a 60).

public class Student {
  int score;

  public Student(int score) {
    this.score = score;
  }

  public void pass() {
    if (score >= 60) {
      System.out.println("That student pass the course.");

      return;
    }

    System.out.println("The student doesn't pass the course.");
  }
}
