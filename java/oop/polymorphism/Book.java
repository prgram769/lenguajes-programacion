public class Book extends Product {
  public Book(double price) {
    super(price);
  }

  @Override
  public double getPrice() {
    return super.getPrice() * (100 - 3.5) / 100;
  }
}
