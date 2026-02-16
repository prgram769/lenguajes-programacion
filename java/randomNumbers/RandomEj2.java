/*Realiza un programa que muestre al azar el nombre de una carta de la
baraja francesa. Esta baraja está dividida en cuatro palos: picas, corazones,
diamantes y tréboles. Cada palo está formado por 13 cartas, de las cuales 9
cartas son numerales y 4 literales: 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K y A (que
sería el 1). Para convertir un número en una cadena de caracteres podemos
usar String.valueOf(n).*/

public class RandomEj2 {
  public static void main(String[] args) {
    int cardSuitNumber = (int) (Math.random() * 4 + 1);
    int cardNumber = (int) (Math.random() * 13 + 1);

    String cardSuitWord = "";
    String cardNumberWord = "";

    switch (cardSuitNumber) {
      case 1:
        cardSuitWord = "Spades";
        break;
      case 2:
        cardSuitWord = "Hearts";
        break;
      case 3:
        cardSuitWord = "Diamonds";
        break;
      case 4:
        cardSuitWord = "Clubs";
        break;
    }

    switch (cardNumber) {
      case 1:
        cardNumberWord = "Ace";
        break;
      case 2:
        cardNumberWord = "Two";
        break;
      case 3:
        cardNumberWord = "Three";
        break;
      case 4:
        cardNumberWord = "Four";
        break;
      case 5:
        cardNumberWord = "Five";
        break;
      case 6:
        cardNumberWord = "Six";
        break;
      case 7:
        cardNumberWord = "Seven";
        break;
      case 8:
        cardNumberWord = "Eight";
        break;
      case 9:
        cardNumberWord = "Nine";
        break;
      case 10:
        cardNumberWord = "Ten";
        break;
      case 11:
        cardNumberWord = "J";
        break;
      case 12:
        cardNumberWord = "Q";
        break;
      case 13:
        cardNumberWord = "K";
        break;
    }

    System.out.printf("The random card is the %s of %s", cardNumberWord, cardSuitWord);
  }
}
