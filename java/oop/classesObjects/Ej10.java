public class Ej10 {
  public static void main(String[] args) {
    Product nikeShirt = new Product("Nike shirt", 45.99);

    nikeShirt.applyDiscount();

    nikeShirt.discount = 20;

    nikeShirt.applyDiscount();
  }
}
