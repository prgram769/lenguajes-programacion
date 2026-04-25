package filesManipulation;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

/*Ejercicio 1
Escribe un programa que guarde en un fichero con nombre primos.dat los
números primos que hay entre 1 y 500. */

public class Ej1 {
  public static void main(String[] args) {
    try {
      File myFile = new File("filesManipulation/primes.dat");

      myFile.createNewFile();

      BufferedWriter bw = new BufferedWriter(new FileWriter("filesManipulation/primes.dat"));

      for (int i = 1; i <= 500; i++) {
        int counter = 0;

        for (int j = 1; j <= i; j++) {
          if (i % j == 0) {
            counter++;
          }
        }

        if (counter == 2) {
          System.out.printf("%d is prime\n", i);

          bw.write(Integer.toString(i));
          bw.write(", ");
        } else {
          System.out.printf("%d isn`t prime\n", i);
        }
      }

      bw.close();
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}