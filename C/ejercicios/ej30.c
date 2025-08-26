/*3. Escriba un programa en el que se declare una variable de tipo entero y se le asigne un
valor. El programa debe mostrar el valor de la variable y la dirección de memoria en la
que se almacena.*/

#include <stdio.h>

int main(void) {
    int n1 = 45;
    int *direction = &n1;

    printf("El valor de la variable es %d y su direccion en memoria es: %p", n1, *direction);
}