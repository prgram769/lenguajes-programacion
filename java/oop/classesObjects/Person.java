// 9. Crea varios objetos Person y guárdalos en un ArrayList.

public class Person {
  String name;
  
  int age;

  public Person(String name, int age) {
    this.name = name;
    this.age = age;
  }

  public void sayHello() {
    System.out.printf("Hello, my name is %s and I'm %d years old\n", name, age);
  }
}
