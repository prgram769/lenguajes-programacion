/*Realiza una programa que calcule las horas transcurridas entre dos horas de
dos días de la semana. No se tendrán en cuenta los minutos ni los segundos.
El día de la semana se puede pedir como un número (del 1 al 7) o como
una cadena (de “lunes” a “domingo”). Se debe comprobar que el usuario
introduce los datos correctamente y que el segundo día es posterior al primero.
A continuación se muestra un ejemplo:
Por favor, introduzca la primera hora.
Día: lunes
Hora: 18
Por favor, introduzca la segunda hora.
Día: martes
Hora: 20
Entre las 18:00h del lunes y las 20:00h del martes hay 26 hora/s.*/

import java.util.Arrays;
import java.util.Scanner;

public class LoopsEj30 {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.print("Enter a week day, you can introduce the day like number or name: ");

    String weekDay = read.nextLine();

    String[] week = {"Monday", "Tuesday", "Wednesday", "Thusday", "Friday", "Saturday", "Sunday"};

    if (weekDay.length() == 1 && weekDay.charAt(0) > 7 || !Arrays.asList(week).contains(weekDay)) {
      System.out.println("That day doesn't exist.");

      read.close();

      return;
    } else {
      System.out.println(weekDay);
    }
    // if (weekDay.length() == 1) {
    //   switch (weekDay) {
    //     case "1":
    //
    //       break;
    //     case "2":
    //
    //       break;
    //     case "3":
    //
    //       break;
    //     case "4":
    //
    //       break;
    //     case "5":
    //
    //       break;
    //     case "6":
    //
    //       break;
    //     case "7":
    //
    //       break;
    //     default:
    //       System.out.println("That day doesn't exist.");
    //       break;
    //   }
    // } else {
    //   switch (weekDay) {
    //     case "Monday":
    //
    //       break;
    //     case "Tuesday":
    //
    //       break;
    //     case "Wednesday":
    //
    //       break;
    //     case "Thursday":
    //
    //       break;
    //     case "Friday":
    //
    //       break;
    //     case "Saturday":
    //
    //       break;
    //     case "Sunday":
    //
    //       break;
    //     default:
    //       System.out.println("That day doesn't exist.");
    //       break;
    //   }


    read.close();
  }
}
