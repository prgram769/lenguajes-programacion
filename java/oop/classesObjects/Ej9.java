import java.util.ArrayList;

public class Ej9 {
  public static void main(String[] args) {
    Person myPerson1 = new Person("Paco", 34);
    Person myPerson2 = new Person("Maria", 23);
    Person myPerson3 = new Person("Antonio", 45);

    ArrayList<Person> myPersonList = new ArrayList<>();

    myPersonList.add(myPerson1);
    myPersonList.add(myPerson2);
    myPersonList.add(myPerson3);

    System.out.println(myPersonList.size());
    System.out.println(myPersonList.get(0));
    System.out.println(myPersonList.get(1));
    System.out.println(myPersonList.get(2));
  }
}
