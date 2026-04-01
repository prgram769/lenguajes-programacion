import matematicas.Basics;

class test {
  public static void main(String[] args) {
    int number = Integer.parseInt(args[0]);
    int nDigit = Integer.parseInt(args[1]);

    System.out.println(Basics.digitPosition(number, nDigit));
  }
}
