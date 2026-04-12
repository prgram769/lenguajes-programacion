// 3. Crea una clase BankAccount con el atributo privado balance. Implementa los métodos deposit(double amount) y withdraw(double amount) que validen las cantidades correctamente.

public class BankAccount {
  private double balance;

  public double getBalance() {
    return balance;
  }

  public void deposit(double amount) {
    this.balance = balance + amount;
  }

  public void withdraw(double amount) {
    this.balance = balance - amount;
  }
}
