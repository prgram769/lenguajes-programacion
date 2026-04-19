// 2. Define una clase Person con los atributos name y age. Luego crea una clase Student que agregue el atributo grade y un método study().

public class Ej2 {
  public static void main(String[] args) {
    Person myPerson = new Person("Mariano", 23);

    System.out.printf("myPerson whose name is %s has %d years old\n", myPerson.getName(), myPerson.getAge());

    Student myStudent = new Student("Francisco", 21, 9.2);

    System.out.printf("myStudent whose name is %s has %d years old and his grade is %.2f\n", myStudent.getName(), myStudent.getAge(), myStudent.getGrade());

    myStudent.study();
  }
}
