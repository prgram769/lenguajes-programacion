package matematicas;

public class Basics {
  /*
   * Devuelve verdadero si el número que se pasa como pará-
   * metro es capicúa y falso en caso contrario.
   */
  public static boolean isPalindromic(int number) {
    int originalNumber = number;
    int reverseNumber = 0;

    while (originalNumber > 0) {
      int digit = originalNumber % 10;

      reverseNumber = reverseNumber * 10 + digit;

      originalNumber /= 10;
    }

    if (number == reverseNumber) {
      return true;
    }

    return false;
  }

  /*
   * Devuelve verdadero si el número que se pasa como parámetro
   * es primo y falso en caso contrario.
   */
  public static boolean isPrime(int number) {
    int counter = 0;

    for (int i = 1; i <= number; i++) {
      if (number % i == 0) {
        counter++;
      }
    }

    if (counter <= 2) {
      return true;
    }

    return false;
  }

  /*
   * Devuelve el menor primo que es mayor al número que
   * se pasa como parámetro.
   */
  public static int nextPrime(int number) {
    int nextNumber = number + 1;

    while (true) {
      int counter = 0;

      for (int i = 1; i <= nextNumber; i++) {
        if (nextNumber % i == 0) {
          counter++;
        }
      }

      if (counter <= 2) {
        return nextNumber;
      }

      nextNumber++;
    }
  }

  /*dada una base y un exponente devuelve la potencia.*/
  public static double powFunction(double base, int exponent) {
    double finalNumber = 1;
    
    if (exponent == 0) {
      return 1.0;
    }

    if (exponent < 0) {
      for (int i = 0; i < -exponent; i++) {
        finalNumber *= base;
      }

      finalNumber = 1 / finalNumber;

      return finalNumber;
    }

    for (int i = 0; i < exponent; i++) {
      finalNumber *= base;
    }

    return finalNumber;
  }

  /*Cuenta el número de dígitos de un número entero.*/
  public static int numberLength(int number) {
    if (number == 0) {
      return 1;
    }

    if (number < 0) {
      number = -number;
    }

    int counter = 0;
    int tempNumber = number;

    while (tempNumber != 0) {
      tempNumber /= 10;
      
      counter++;
    }

    return counter;
  }

  /*Le da la vuelta a un número.*/
  public static int upsideDownNumber(int number) {
    int tempNumber = number;
    int newNumber = 0;

    int counter = 0;
    int falseNumber = number;

    while (falseNumber != 0) {
      falseNumber /= 10;

      counter++;
    }

    for (int i = 0; i < counter; i++) {
      newNumber *= 10;

      newNumber += tempNumber % 10;

      tempNumber /= 10;
    }

    return newNumber;
  }

  /*Devuelve el dígito que está en la posición n de un número
entero. Se empieza contando por el 0 y de izquierda a derecha.*/
  public static int digitPosition(int number, int nDigit) {
    int tempNumber = number;
    int digit = 0;

    for (int i = 0; i < nDigit; i++) {
      tempNumber = tempNumber / 10;
    }
   
    return tempNumber;

    // return((int)1.566);
  }
}
