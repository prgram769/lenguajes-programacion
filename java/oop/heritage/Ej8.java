// 8. Account tiene un saldo y métodos para deposit() y withdraw(). SavingsAccount hereda y agrega un método addInterest().

public class Ej8 {
  public static void main(String[] args) {
    Account myAccount = new Account();

    myAccount.deposit(1200);

    System.out.println(myAccount.getBalance());

    SavingsAccount mySavingsAccount = new SavingsAccount();
    
    mySavingsAccount.deposit(1200);
    mySavingsAccount.addInterest(3.5);

    System.out.println(mySavingsAccount.getBalance());
  }
}
