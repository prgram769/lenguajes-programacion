/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */

#include <stdio.h>

int main(void) {
    int i, counter, j;

    for (i = 2; i <= 100; i++)
    {
        counter = 0;

        for (j = 1; j <= 100; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
            
        }

        if (counter == 2)
        {
            printf("%d es un numero primo.\n", i);
        } else {
            printf("%d no es un numero primo.\n", i);
        }
        
    }
    
}