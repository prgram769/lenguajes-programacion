// 6. Crea una clase BankAccount con atributo balance y un método deposit() que sume el saldo.

public class BankAccount {
  double balance;

  public BankAccount() {
    this.balance = 0;
  }

  public void deposit(double newBalance) {
    balance += newBalance;
  }

  public void currentBalance() {
    System.out.printf("Your current balance is %.2f\n", balance);
  }
}
