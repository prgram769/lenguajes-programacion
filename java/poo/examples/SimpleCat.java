public class SimpleCat {
  String color;
  String breed;
  String sex;

  int age;

  double weight;

  // Constructor

  SimpleCat (String s) {
    this.sex = s;
  }

  String getSex() {
    return this.sex;
  }

  void meow() {
    System.out.println("Meooow");
  }

  void purr() {
    System.out.println("mrrrrr");
  }

  void eat(String food) {
    if (!food.equals("fish")) {
      System.out.println("Sorry, I only eat fish");

      return;
    }

    System.out.println("Hmmmm, Thanks");
  }

  void fightWith(SimpleCat enemy) {
    if (this.sex.equals("female")) {
      System.out.println("Sorry, I don't want to fight");
    } else {
      if (enemy.getSex().equals("female")) {
        System.out.println("Sorry, I don't fight with kitten");
      } else {
        System.out.println("Let's go to fight right now");
      }
    }
  }
}
