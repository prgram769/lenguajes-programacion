/*Muestra 50 números enteros aleatorios entre 100 y 199 (ambos incluidos)
separados por espacios. Muestra también el máximo, el mínimo y la media
de esos números.*/

public class RandomEj5 {
  public static void main(String[] args) {
    int bigger = 0;
    int smaller = 0;
    float average = 0;

    for (int i = 0; i < 50; i++) {
      int randomNumber = (int)((Math.random() * 100) + 100);

      System.out.print(randomNumber + " ");
    }
  }
}
