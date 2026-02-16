/*Vamos a producir ahora de forma aleatoria una palabra - piedra, papel o
tijera - generando primero un número entero entre 0 y 2 y posteriormente haciendo
corresponder una palabra a cada número.*/

public class Example2 {
  public static void main(String[] args) {
    int wordNumber = (int)(Math.random()*3 + 1);

    switch (wordNumber) {
      case 1:
        System.out.println("Paper");
        break;
      case 2:
        System.out.println("Stone");
        break;
      case 3:
        System.out.println("Scissor");
        break;
    }
  }
}
