package oop.abstraction;

// 7. Crea una clase abstracta Appliance con método turnOn() y turnOff().
// Implementa TV y WashingMachine con mensajes diferentes al encender y apagar.

public class Ej7 {
  public static void main(String[] args) {
    TV myTv = new TV();
    WashingMachine myWashingMachine = new WashingMachine();

    Appliance[] myAppliances = {myTv,myWashingMachine};

    for (Appliance appliance : myAppliances) {
      appliance.turnOn();
      appliance.turnOff();
    }
  } 
}