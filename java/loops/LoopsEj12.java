/*Escribe un programa que muestre los n primeros términos de la serie de
Fibonacci. El primer término de la serie de Fibonacci es 0, el segundo es 1
y el resto se calcula sumando los dos anteriores, por lo que tendríamos que
los términos son 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144… El número n se
debe introducir por teclado*/

public class LoopsEj12 {
  public static void main(String[] args) {
    System.out.print("Tell me how many numbers of fibonacci's sucession do you want: ");

    int numbers = Integer.parseInt(System.console().readLine());
    int fibonacciFirst = 0;
    int fibonacciSecond = 1;

    for (int i = 0; i <= numbers; i++) {
      System.out.println(fibonacciFirst);

      int temp = fibonacciFirst;

      fibonacciFirst = fibonacciSecond;

      fibonacciSecond = temp + fibonacciSecond;
    }
  }
}
