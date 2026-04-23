package oop.abstraction;

// 4. Crea una interfaz Drawable. Implementa las clases Circle, Square, y Triangle que muestren cómo se dibuja cada figura usando draw().

public class Ej4 {
  public static void main(String[] args) {
    Square mySquare = new Square();
    Circle myCircle = new Circle();
    Triangle myTriangle = new Triangle();

    mySquare.draw();
    myCircle.draw();
    myTriangle.draw();
  }
}