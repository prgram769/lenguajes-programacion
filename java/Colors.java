public class Colors {
  public static void main(String[] args) {
    String red = "\033[31m";
    String green = "\033[32m";
    String orange = "\033[33m";
    String blue = "\033[34m";
    String purple = "\033[35m";
    String white = "\033[37m";

    System.out.println(red + "Hello world with red");
    System.out.println(green + "Hello world with green");
    System.out.println(orange + "Hello world with orange");
    System.out.println(blue + "Hello world with blue");
    System.out.println(purple + "Hello world with purple");
    System.out.println(white + "Hello world with white");
  }
}
