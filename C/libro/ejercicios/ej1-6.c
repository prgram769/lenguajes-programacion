/*Verifique que la expresion getchar() != EOF es 0 o 1*/

#include <stdio.h>

int main(void) {

    int character;

    while (character = getchar() != EOF)
    {
        if (character == 0)
        {
            printf("\nEl valor de la expresion getchar() != EOF es %d.", character);
        } else if (character == 1)
        {
            printf("\nEl valor de la expresion getchar() != EOF es %d.", character);
        } else {
            printf("\nERROR.");
        }

    }
    
}