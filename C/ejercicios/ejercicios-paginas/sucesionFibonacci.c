/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

#include <stdio.h>

int main(void) {
    long n1, n2, fibonacci, i;

    n1 = fibonacci = i = 0;

    n2 = 1;

    for (i = 0; i < 50; i++)
    {
        fibonacci = n1 + n2;

        printf("%ld, ", n1);

        n1 = n2;

        n2 = fibonacci;
    }
    
    return 0;
}