#include <stdio.h>

int main(void) {
    /*Cuenta los caracteres de la entrada 1ª version*/

    long nOfCharacters = 0;

    while (getchar() != EOF)
    {
        ++nOfCharacters;

    }
    
    printf("\nEl numero de caracteres es %ld\n", nOfCharacters);
    
}