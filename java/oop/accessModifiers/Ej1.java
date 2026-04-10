// 1. Crea una clase Person con atributos privados name y age. Usa los métodos getName(), setName(), getAge() y setAge() para asignar y mostrar valores desde otra clase

public class Ej1 {
  public static void main(String[] args) {
    Person myPerson = new Person("Paco", 34);

    System.out.printf("This person is %s and his age is %d\n", myPerson.getName(), myPerson.getAge());

    myPerson.setName("Maria");
    myPerson.setAge(23);

    System.out.printf("This person is %s and her age is %d\n", myPerson.getName(), myPerson.getAge());
  }
}
