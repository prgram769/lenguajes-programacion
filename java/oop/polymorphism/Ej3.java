// 3. Crea una clase Printer con varios métodos print() sobrecargados que acepten diferentes tipos de parámetros (String, int, double). 
// Llama a cada uno desde main.

public class Ej3 {
  public static void main(String[] args) {
    System.out.println(Printer.print("hola"));
    System.out.println(Printer.print(3));
    System.out.println(Printer.print(32.4));
  }
}