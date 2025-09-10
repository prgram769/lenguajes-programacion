/*4. Escriba una función que intercambie los valores de dos variables de tipo entero.*/

#include <stdio.h>

int change(int n1, int n2) {
    int n1c = n2;
    int n2c = n1;

    printf(" despues del cambio, el primer numero es %d y el segundo %d", n1c, n2c);
}

int main(void) {
    int n1, n2;

    printf("Debes introducir valores de dos numeros enteros:\n\n");

    if (scanf("%d %d", &n1, &n2) == 2)
    {
        printf("El valor del primer numero introducido fue %d y del segundo %d,",n1, n2);
        change(n1, n2);
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}