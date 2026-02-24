/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

import java.util.Arrays;
import java.util.Scanner;

public class Anagram {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter a word: ");

    String word1 = read.nextLine();

    System.out.print("Enter another word: ");

    String word2 = read.nextLine();

    if (word1.equals(word2)) {
      System.err.println("These words aren't anagrams.");

      read.close();

      return;
    }

    if (word1.length() != word2.length()) {
      System.err.println("These words aren't anagrams.");

      read.close();

      return;
    }

    char[] word1Sorted = word1.toCharArray();
    char[] word2Sorted = word2.toCharArray();

    Arrays.sort(word1Sorted);
    Arrays.sort(word2Sorted);

    int test = 0;

    for (int i = 0; i < word1Sorted.length; i++) {
      if (word1Sorted[i] == word2Sorted[i]) {
        test++;
      }
    }

    if (test == word1Sorted.length) {
      System.out.println("These words are anagrams.");
    } else {
      System.err.println("These words aren't anagrams.");
    }

    read.close();
  }
}
