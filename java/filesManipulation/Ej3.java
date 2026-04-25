package filesManipulation;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;

/*Ejercicio 3
Escribe un programa que guarde en un fichero el contenido de otros dos
ficheros, de tal forma que en el fichero resultante aparezcan las líneas de los
primeros dos ficheros mezcladas, es decir, la primera línea será del primer
fichero, la segunda será del segundo fichero, la tercera será la siguiente del
primer fichero, etc.
Los nombres de los dos ficheros origen y el nombre del fichero destino se deben
pasar como argumentos en la línea de comandos.
Hay que tener en cuenta que los ficheros de donde se van cogiendo las líneas
pueden tener tamaños diferentes. */

public class Ej3 {
  public static void main(String[] args) {
    try {
      File myFile = new File(String.format("filesManipulation/%s", args[0]));

      myFile.createNewFile();

      // String fileRoute = myFile.getCanonicalPath();
      String filesPath = myFile.getParent().concat("/");

      BufferedReader brFile1 = new BufferedReader(new FileReader(filesPath.concat(args[1])));
      BufferedReader brFile2 = new BufferedReader(new FileReader(filesPath.concat(args[2])));

      BufferedWriter bw = new BufferedWriter(new FileWriter(myFile.getParent().concat("/").concat(myFile.getName())));

      long totalLines = brFile1.lines().count() + brFile2.lines().count();

      for (int i = 0; i < totalLines; i++) {
        bw.write(brFile1.readLine());
        bw.write(brFile2.readLine());
      }

      brFile1.close();
      brFile2.close();
      bw.close();
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}