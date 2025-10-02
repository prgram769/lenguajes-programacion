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

    fibonacci = 0;
    
    for (i = 0; i <= 50; i++)
    {
        printf("%d, ",fibonacci);

        fibonacci = number + numberBefore;
        
        numberBefore = fibonacci;
    }
    
}