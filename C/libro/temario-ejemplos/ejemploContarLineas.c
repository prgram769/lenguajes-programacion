#include <stdio.h>

int main(void) {
    /*Contar las lineas de la entrada*/

    int character, nOfLines;

    nOfLines = 0;

    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
        {
            ++nOfLines;
        }
    }

    printf("\nEl numero de lineas es %d\n", nOfLines);
    
}