package filesManipulation;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.Collections;

/*Ejercicio 4
Realiza un programa que sea capaz de ordenar alfabéticamente las palabras
contenidas en un fichero de texto. El nombre del fichero que contiene las
palabras se debe pasar como argumento en la línea de comandos. El nombre
del fichero resultado debe ser el mismo que el original añadiendo la coletilla
sort, por ejemplo palabras_sort.txt. Suponemos que cada palabra ocupa una
línea. */

public class Ej4 {
  public static void main(String[] args) {
    try {
      BufferedReader br1 = new BufferedReader(new FileReader(args[0]));
      BufferedWriter bw = new BufferedWriter(new FileWriter(args[0].replace(".txt","Sorted.txt")));

      ArrayList<String> wordList = new ArrayList<>();

      String line;

      while (true) {
        line = br1.readLine();

        if (line == null) {
          break;
        }

        wordList.add(line);
      }

      Collections.sort(wordList);

      for (int i = 0; i < wordList.size(); i++) {
        bw.write(wordList.get(i));
        bw.newLine();
      }

      br1.close();
      bw.close();
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}