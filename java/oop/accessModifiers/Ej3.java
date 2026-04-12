public class Ej3 {
  public static void main(String[] args) {
    BankAccount myBankAccount = new BankAccount();

    System.out.println(myBankAccount.getBalance());
    
    myBankAccount.deposit(123.24);

    System.out.println(myBankAccount.getBalance());

    myBankAccount.withdraw(20);

    System.out.println(myBankAccount.getBalance());
  }
}
