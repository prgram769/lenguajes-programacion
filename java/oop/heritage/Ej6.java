// 6. Crea una clase Bird con el método fly(). Luego crea Eagle que sobrescriba fly() pero también llame al método original con super.fly().

public class Ej6 {
  public static void main(String[] args) {
    Eagle myEagle = new Eagle();

    myEagle.fly();

    myEagle.birdFly();
  }
}
