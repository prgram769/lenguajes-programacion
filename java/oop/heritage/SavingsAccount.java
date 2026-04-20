public class SavingsAccount extends Account {
  public void addInterest(double interest) {
    double newBalance = getBalance() * interest % 100;
  }
}
