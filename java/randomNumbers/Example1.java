/*Vamos a ponerlo un poco más difícil. Ahora vamos a generar números enteros entre
50 y 60 ambos incluidos.*/

public class Example1 {
  public static void main(String[] args) {
    for (int i = 0; i < 15; i++) {
      System.out.print(((int)(Math.random()*11) + 50) + " ");
    }
  }
}
