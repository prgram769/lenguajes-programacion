public class SavingsAccount extends Account {
  private double newBalance;

  public void addInterest(double interest) {
    newBalance = super.getBalance() * (100 + interest) / 100;
  }

  @Override
  public double getBalance() {
    return this.newBalance;
  }
}
