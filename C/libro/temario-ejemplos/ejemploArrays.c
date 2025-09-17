#include <stdio.h>

int main(void) {
    /*Cuenta digitos, espacios blancos y otros*/

    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0; /*eso es lo mismo que hacer nwhite = 0; y nother = 0; en lineas separadas*/

    for ( i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
            
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
                ++ndigit[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t')
        {
                ++nwhite;
        } else {
                ++nother;
        }
    }

    printf("digitos =");

    for ( i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);   
    }

    printf(", espacios en blanco = %d, otros = %d\n", nwhite, nother);
    
}