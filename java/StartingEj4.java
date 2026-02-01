/*School schedule*/
public class StartingEj4 {
  public static void main(String[] args) {
    String red = "\033[31m"; // OS
    String green = "\033[32m"; // PC building and maintenance
    String orange = "\033[33m"; // PBI 1
    String blue = "\033[34m"; // Office software
    String purple = "\033[35m"; // Local networks
    String white = "\033[37m"; // Others

    String[] subjects = {"Networks ", "OS ", "PCs ", "PBI 1 ", "Software "};

    System.out.println("\t\t|--School Schedule--|\n");
    System.out.println("Monday Tuesday Wednesday Thursday Friday");
    System.out.println(purple + subjects[0] + white + "Enviroment " + orange + subjects[3] + purple + subjects[0] + subjects[0]);
    System.out.println(subjects[0] + orange + subjects[3] + red + subjects[1] + orange + subjects[3] + blue + subjects[4]);
    System.out.println(purple + subjects[0] + blue + subjects[4] + red + subjects[1] + orange + subjects[3] + blue + subjects[4]);
    System.out.println(white + "\t\tBreak");
    System.out.println(red + subjects[1] + blue + subjects[4] + subjects[4] + green + subjects[2] + blue + subjects[4]);
    System.out.println(green + subjects[2] + subjects[2] + blue + subjects[4] + green + subjects[2] + red + subjects[1]);
    System.out.println(green + subjects[2] + subjects[2] + blue + subjects[4] + white + "IT " + red + subjects[1]);
  }
}
