/*Define un array de 10 caracteres con nombre simbolo y asigna valores a los
elementos según la tabla que se muestra a continuación. Muestra el contenido
de todos los elementos del array. ¿Qué sucede con los valores de los elementos
que no han sido inicializados?*/

public class Ej2 {
  public static void main(String[] args) {
    char[] simbol = new char[10];

    simbol[0] = 'a';
    simbol[1] = 'x';
    simbol[4] = '@';
    simbol[6] = ' ';
    simbol[7] = '+';
    simbol[8] = 'Q';

    for (char c : simbol) {
      System.out.println(c);
    }

    // con los valores que no han sido inicializados se muestran como un salto de linea(vacio, no se muestra nada en esos huecos)
  }
}
