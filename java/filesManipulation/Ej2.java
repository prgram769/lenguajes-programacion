package filesManipulation;

import java.io.BufferedReader;
import java.io.FileReader;

/*Ejercicio 2
Realiza un programa que lea el fichero creado en el ejercicio anterior y que
muestre los números por pantalla. */

public class Ej2 {
  public static void main(String[] args) {
    try {
      BufferedReader br = new BufferedReader(new FileReader("filesManipulation/primes.dat"));

      System.out.println(br.readLine());

      br.close();
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}