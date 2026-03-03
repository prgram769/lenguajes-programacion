/*Escribe un programa que lea 15 números por teclado y que los almacene en un
array. Rota los elementos de ese array, es decir, el elemento de la posición 0
debe pasar a la posición 1, el de la 1 a la 2, etc. El número que se encuentra en
la última posición debe pasar a la posición 0. Finalmente, muestra el contenido
del array.*/

import java.util.Scanner;

public class Ej6 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    int[] nums = new int[15];

    for (int i = 0; i < nums.length; i++) {
      System.out.print("Enter a number: ");

      nums[i] = read.nextInt();
    }

    System.out.println("Before:");

    for (int i = 0; i < nums.length; i++) {
      System.out.println(nums[i]);
    }

    int[] cloneNums = nums.clone();

    for (int i = 0; i < nums.length; i++) {
      if (i == nums.length - 1) {
        nums[i] = cloneNums[0];
      } else {
        nums[i] = cloneNums[i + 1];
      }
    }

    System.out.println("After:");

    for (int i = 0; i < nums.length; i++) {
      System.out.println(nums[i]);
    }

    read.close();

    // EFFICIENT WAY
    // int first = nums[0];
    //
    // for (int i = 0; i < nums.length - 1; i++) {
    //   nums[i] = nums[i + 1];
    // }
    //
    // nums[nums.length - 1] = first;
  }
}
