/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

#include <stdio.h>

int main(void) {
    int number, numberBefore, fibonacci, i;
    
    number = 1;

    numberBefore = 0;
    
    for (i = 0; i <= 50; i++)
    {
        fibonacci = number + numberBefore;

        if (i == 0)
        {
            printf("0, ");
        } else if (i == 1) {
            printf("1, 1, ");
        } else {
            printf("%d, ", fibonacci);
        }

        numberBefore = fibonacci;
    }
    
}