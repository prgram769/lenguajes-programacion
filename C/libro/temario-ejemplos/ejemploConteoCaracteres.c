#include <stdio.h>

int main(void) {
    /*Cuenta los caracteres de la entrada 1ª version*/

    int counter = 0;

    while (getchar() != EOF)
    {
        counter++;

        printf("%d\n", counter);
    }
    
}