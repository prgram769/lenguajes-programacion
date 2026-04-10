// 10. Crea una clase Product y un método que aplique un descuento sobre su precio.

public class Product {
  String name;

  double price;

  int discount;

  public Product(String name, double price) {
    this.name = name;
    this.price = price;
  }

  public void applyDiscount() {
    if (discount == 0) {
      System.out.printf("The product whose name is %s hasn't any discount and cost %.2f$\n", name, price);

      return;
    }

    double priceDiscounted = price * (discount * 0.01);
    double priceWithDiscount = price - priceDiscounted;

    System.out.printf("Your product whose name is %s has a %d%% of discount, now cost %.2f$\n", name, discount, priceWithDiscount);
  }
}
