#include <stdio.h>

int main(void) {
    /*Cuenta los caracteres de la entrada 2ª version*/

    long counter;

    counter = 0;

    while (getchar() != EOF)
    {
        ++counter;

        printf("%ld\n", counter);
    }
    
}