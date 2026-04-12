public class Ej6 {
  public static void main(String[] args) {
    User myUser = new User("mariano", "1234");

    System.out.println(myUser.checkPassword("452df"));
    System.out.println(myUser.checkPassword("1234"));

    myUser.setPassword("452df");

    System.out.println(myUser.checkPassword("452df"));
  }
}
