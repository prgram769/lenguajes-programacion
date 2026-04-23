package oop.abstraction;

// 6. Crea una interfaz Movable con el método move(). Haz que las clases Car y Robot implementen ese método con comportamientos diferentes.

public class Ej6 {
  public static void main(String[] args) {
    Car myCar = new Car();
    Robot myRobot = new Robot();

    myCar.move();
    myRobot.move();
  } 
}