package oop.abstraction;

// 2. Crea una interfaz Playable con el método play(). Luego implementa esa interfaz en dos clases: Guitar y Piano. 
// Cada una debe mostrar un mensaje diferente al ejecutarse.

public class Ej2 {
  public static void main(String[] args) {
    Guitar myGuitar = new Guitar();
    Piano myPiano = new Piano();

    System.out.println(myGuitar.play());
    System.out.println(myPiano.play());
  }
}