/*Escribe un programa que cuente espacios en blanco, tabuladores y nuevas lineas*/

#include <stdio.h>

int main(void) {
    int c, counter;
    
    counter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            counter++;

            printf("El valor del contador es: %d\n", counter);
        }
        
    }
    
}