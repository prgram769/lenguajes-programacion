package filesManipulation;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;

/*Ejercicio 5
Escribe un programa capaz de quitar los comentarios de un programa de Java.
Se utilizaría de la siguiente manera:
quita_commentarios PROGRAMA_ORIGINAL PROGRAMA_LIMPIO
Por ejemplo:
quita_comentarios hola.java holav2.java
crea un fichero con nombre holav2.java que contiene el código de hola.java pero
sin los comentarios. */

public class Ej5 {
  public static void main(String[] args) {
    try {
      BufferedReader br = new BufferedReader(new FileReader(args[0]));
      BufferedWriter bw = new BufferedWriter(new FileWriter(args[0]));

      int c;
      int state = 0;

      while ((c = br.read()) != -1) {
        switch (state) {
          case 0:
            if ((char) c == '/') {
              int c2 = br.read();

              if ((char) c2 == '/') {
                System.out.println("Hay comentario");

                state = 1;
              } else if ((char) c2 == '*') {
                System.out.println("Hay comentario");
                
                state = 2;
              } else {
                bw.write((char) c);

                if (c2 != -1) {
                  bw.write((char) c2);
                }
              }
            } else {
              bw.write((char) c);
            }
            break;
          case 1:
            
            break;
          default:
            break;
        }
      }
      
      br.close();
      bw.close();
    } catch (Exception e) {
      System.err.println(e);
    }
  } 
}