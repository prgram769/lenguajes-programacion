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

    String[] week = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

    System.out.println(weekDay.charAt(0));

    int dayNumber = 0;

    try {
      dayNumber = Integer.parseInt(weekDay);

      if (dayNumber < 1 || dayNumber > 7) {
        System.err.println("That day doesn't exist.");

        read.close();

        return;
      }
    } catch (Exception e) {
      if (!Arrays.asList(week).contains(weekDay.toLowerCase())) {
        System.err.println("That day doesn't exist.");

        read.close();

        return;
      } else {
        switch (weekDay.toLowerCase()) {
          case "monday":
            dayNumber = 1;
            break;
          case "tuesday":
            dayNumber = 2;
            break;
          case "wednesday":
            dayNumber = 3;
            break;
          case "thursday":
            dayNumber = 4;
            break;
          case "friday":
            dayNumber = 5;
            break;
          case "saturday":
            dayNumber = 6;
            break;
          case "sunday":
            dayNumber = 7;
            break;
        }
      }
    }
    


    read.close();
  }
}
