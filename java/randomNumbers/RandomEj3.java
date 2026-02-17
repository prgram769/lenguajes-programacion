/*Igual que el ejercicio anterior pero con la baraja española. Se utilizará la baraja
de 40 cartas: 2, 3, 4, 5, 6, 7, sota, caballo, rey y as.*/

public class RandomEj3 {
  public static void main(String[] args) {
    String[] cardSuit = { "Sword", "Gold", "Cup", "Clubs" };
    String[] cards = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Jack", "Horse", "King" };

    int cardSuitNumberRandom = (int)(Math.random() * cardSuit.length);
    int cardNumberRandom = (int)(Math.random() * cards.length);

    String cardSuitElement = cardSuit[cardSuitNumberRandom];
    String cardElement = cards[cardNumberRandom];

    System.out.printf("The card is %s of %s", cardElement, cardSuitElement);
  }
}
