/*Objetivo: Un programa que genere la tabla de multiplicar de un número dado por el usuario.
Requisitos:

    El usuario ingresa un número entero.

    Mostrar la tabla desde 1 hasta 10 (ej: 5 x 1 = 5, 5 x 2 = 10, ..., 5 x 10 = 50).

    Validar que la entrada sea un número válido.

    Interface amigable con colores opcionales (usando ANSI escapes si es posible).*/

#include <stdio.h>

int main(void) {
    int n1;

    printf("\x1b[34m--GENERADOR DE TABLAS DE MULTIPLICAR--\n\n");
    printf("Introduce un numero entero.\n\n");

    if (scanf("%d", &n1) == 1)
    {
        for (int i = 0; i < 11; i++)
        {
        int result = n1 * i;

        printf("\n%d * %d = %d\n", n1, i, result);
        }
    } else {
        printf("\nIngresa un valor valido.");
    }
}