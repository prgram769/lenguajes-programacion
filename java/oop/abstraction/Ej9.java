package oop.abstraction;

// 9. Crea una clase abstracta Document con el método print(). Luego crea PDFDocument y WordDocument, cada una con su forma de imprimir.

public class Ej9 {
  public static void main(String[] args) {
    PDFDocument myPdfDocument = new PDFDocument();
    WordDocument myWordDocument = new WordDocument();

    myPdfDocument.print();
    myWordDocument.print();
  } 
}