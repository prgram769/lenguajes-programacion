public class ReadInfoConsole {
  public static void main(String[] args) {
    String name;
    
    System.out.println("Tell me your name please:");
    
    name = System.console().readLine();

    System.out.println("Welcome " + name);
  }
}
