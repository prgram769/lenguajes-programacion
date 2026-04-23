package oop.abstraction;

public class PDFDocument extends Document {
  @Override
  public void print() {
    System.out.println("This document is a PDF document");
  } 
}