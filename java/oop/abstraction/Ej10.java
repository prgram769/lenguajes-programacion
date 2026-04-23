package oop.abstraction;

// 10. Crea una interfaz Payable con el método pay(). 
// Luego implementa las clases Invoice y EmployeePayment, cada una mostrando un mensaje de pago diferente.

public class Ej10 {
  public static void main(String[] args) {
    Invoice myInvoice = new Invoice();
    EmployeeSalary myEmployeeSalary = new EmployeeSalary();

    myInvoice.pay();
    myEmployeeSalary.pay();
  } 
}