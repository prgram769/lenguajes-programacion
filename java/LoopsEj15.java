/*Escribe un programa que dados dos números, uno real (base) y un entero
positivo (exponente), saque por pantalla todas las potencias con base el
numero dado y exponentes entre uno y el exponente introducido. No se deben
utilizar funciones de exponenciación. Por ejemplo, si introducimos el 2 y el 5,
se deberán mostrar 2^1, 2^2, 2^3, 2^4 y 2^5.*/

import java.util.ArrayList;

public class LoopsEj15 {
  public static void main(String[] args) {
    System.out.println("What number do you want to use like base?");

    double staticBase = Double.parseDouble(System.console().readLine());

    System.out.println("Right, now what number do you want to use like exponent?");

    int exponent = Integer.parseInt(System.console().readLine());
    
    double base = staticBase;

    for (int i = 1; i <= exponent; i++) {
      System.out.println(base *= staticBase);
    }
  }
}
