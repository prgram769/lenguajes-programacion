/*Escribe un programa que pida 10 números por teclado y que luego muestre
los números introducidos junto con las palabras “máximo” y “mínimo” al lado
del máximo y del mínimo respectivamente.*/

import java.util.Scanner;

public class Ej5 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    int[] nums = new int[10];

    for (int i = 0; i < nums.length; i++) {
      System.out.print("Enter a number: ");

      nums[i] = read.nextInt();

      System.out.println();
    }

    int max = nums[0];
    int min = nums[0];

    for (int i : nums) {
      if (max < i) {
        max = i;
      }
      if (min > i) {
        min = i;
      }
    }

    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == max) {
        System.out.println(nums[i] + "\tmax");
      } else if (nums[i] == min) {
        System.out.println(nums[i] + "\tmin");
      } else {
        System.out.println(nums[i]);
      }
    }

    read.close();
  }
}
