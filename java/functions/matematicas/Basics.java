package matematicas;

public class Basics {
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

  public static boolean isPrime(int number) {
    int counter = 0;

    while (counter < 3) {
      
    }
  }
}
