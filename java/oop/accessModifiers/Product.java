public class Product {
  private String name;

  private double price;

  public Product(String name, double price) {
    this.name = name;
    this.price = price;
  }

  public String getName() {
    return name;
  }

  public double getPrice() {
    return price;
  }

  public void setName(String name) {
    this.name = name;
  }

  public void setPrice(double price) {
    if (price < 0) {
      System.err.println("The price must be higher than 0");

      return;
    }

    this.price = price;
  }
}
