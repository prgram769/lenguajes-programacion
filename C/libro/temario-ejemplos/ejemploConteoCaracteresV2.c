#include <stdio.h>

int main(void) {
    /*Cuenta los caracteres de la entrada 2ª version*/
    
    double nOfCharacter;

    for (nOfCharacter = 0; getchar() != EOF; ++nOfCharacter)
    {
        ;
    }

    printf("\nEste es el numero de caracteres: %.0f\n", nOfCharacter);
}