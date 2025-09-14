#include <stdio.h>

int main(void) {
    /*copia la entrada a la salida*/

    int c = getchar();

    while (c != EOF)
    {
        putchar(c);

        c = getchar();
    }
    
}