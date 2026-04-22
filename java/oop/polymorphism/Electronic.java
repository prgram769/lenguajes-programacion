public class Electronic extends Product {
  public Electronic(double price) {
    super(price);
  }

  @Override
  public double getPrice() {
    return super.getPrice() * (100 - 20) / 100;
  }
}