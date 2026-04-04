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

  /* dada una base y un exponente devuelve la potencia. */
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

  /* Cuenta el número de dígitos de un número entero. */
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

  /* Le da la vuelta a un número. */
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

  /*
   * Devuelve el dígito que está en la posición n de un número
   * entero. Se empieza contando por el 0 y de izquierda a derecha.
   */
  public static int digitPosition(int number, int nDigit) {
    int tempNumber = number;
    int digit = 0;
    int division = 1;
    int counter = 0;

    while (tempNumber != 0) {
      tempNumber /= 10;

      counter++;
    }

    tempNumber = number;

    for (int i = 0; i < counter - 1; i++) {
      division *= 10;
    }

    for (int i = 0; i < nDigit; i++) {
      division /= 10;
    }

    try {
      tempNumber = tempNumber / division;

      digit = tempNumber % 10;

      return digit;
    } catch (Exception e) {
      return 0;
    }
  }

  /*
   * Da la posición de la primera ocurrencia de un dígito
   * dentro de un número entero. Si no se encuentra, devuelve -1.
   */
  public static int nPosition(int number, int digit) {
    String numbers = Integer.toString(number);

    try {
      int digitPosition = numbers.indexOf(Integer.toString(digit));

      return numbers.indexOf(Integer.toString(digit));
    } catch (Exception e) {
      return -1;
    }
  }

  /*Le quita a un número n dígitos por detrás (por la
derecha).*/
  public static int extractBackNumbers(int number, int digitsToExtract) {
    double tempNumber = number;

    tempNumber = tempNumber / powFunction(10, digitsToExtract);

    return (int) tempNumber;
  }

  /*Le quita a un número n dígitos por delante (por la
izquierda).*/
  public static int extractFrontNumbers(int number, int digitsToExtract) {
    int tempNumber = number;
    int counter = 0;

    while (tempNumber != 0) {
      tempNumber /= 10;

      counter++;
    }

    double falseNumber = number;
    double newDigits = 0;

    newDigits = falseNumber % powFunction(10, counter - digitsToExtract);

    return (int)newDigits;
  }

  /*Añade un dígito a un número por detrás.*/
  public static int pasteBackNumbers(int number, int numberToPaste) {
    int tempNumber = number;
    int tempNumberPasted = numberToPaste;
    int pastedCounter = 0;

    while (tempNumberPasted != 0) {
      tempNumberPasted /= 10;

      pastedCounter++;
    }

    tempNumberPasted = numberToPaste;

    int[] numbersToPaste = new int[pastedCounter];
    int division = 10;

    for (int i = 0; i < pastedCounter; i++) {
      numbersToPaste[i] = tempNumberPasted % 10;

      tempNumberPasted /= 10;
    }

    for (int i = pastedCounter - 1; i >= 0; i--) {
      tempNumber *= 10;

      tempNumber += numbersToPaste[i];
    }

    return tempNumber;
  }

  /*Añade un dígito a un número por delante.*/
  public static int pasteFrontNumbers(int number, int numberToPaste) {
    int tempNumber = number;
    int tempNumberPasted = numberToPaste;
    int counter = 0;

    while (tempNumber != 0) {
      tempNumber /= 10;

      counter++;
    }

    for (int i = 0; i < counter; i++) {
      tempNumberPasted *= 10;
    }

    tempNumberPasted += number;

    return tempNumberPasted;
  }

  /*Toma como parámetros las posiciones inicial y final
dentro de un número y devuelve el trozo correspondiente.*/
  public static int initFinishPosition(int number) {
    int tempNumber = number;
    int counter = 0;

    while (tempNumber != 0) {
      tempNumber /= 10;

      counter++;
    }

    if (counter == 1) {
      return number;
    }
    
    tempNumber = number;

    int finalDigit = tempNumber % 10;

    for (int i = 0; i < counter - 1; i++) {
      tempNumber /= 10;
    }

    int initDigit = tempNumber % 10;
    int newNumber = initDigit;

    newNumber *= 10;
    newNumber += finalDigit;

    return newNumber;
  }

  /*Pega dos números para formar uno.*/
  public static int pasteTwoNumbers(int number1, int number2) {
    int tempNumber1 = number1;
    int tempNumber2 = number2;
    int counter = 0;

    if (number1 == 0) {
      return number2;
    }

    if (number2 == 0) {
      tempNumber1 *= 10;
    }

    while (tempNumber2 != 0) {
      tempNumber2 /= 10;

      counter++;
    }

    tempNumber2 = number2;

    for (int i = 0; i < counter; i++) {
      tempNumber1 *= 10;
    }

    tempNumber1 += number2;

    return tempNumber1;
  }
}
