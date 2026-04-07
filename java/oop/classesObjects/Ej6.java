public class Ej6 {
  public static void main(String[] args) {
    BankAccount myBank = new BankAccount();

    myBank.deposit(200);

    myBank.currentBalance();

    myBank.deposit(20.34);

    myBank.currentBalance();
  }
}
