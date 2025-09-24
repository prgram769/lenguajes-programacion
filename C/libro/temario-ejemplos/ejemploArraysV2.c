#include <stdio.h>

int main(void) {
    /*cuenta digitos, espacios blancos y otros*/

    int character, nWhites, nOthers, i;
    int nDigit[10];

    nWhites = nOthers = 0;

    for (i = 0; i < 10; i++)
    {
        nDigit[i] = 0;
    }

    while ((character = getchar()) != EOF)
    {
        if (character >= '0' && character <= '9')
        {
            ++nDigit[character - '0'];
        } else if (character == ' ' || character == '\t' || character == '\n')
        {
            ++nWhites;
        } else {
            ++nOthers;
        }
        
    }
    
    printf("Digitos =");

    for (i = 0; i < 10; i++)
    {
        printf(" %d", nDigit[i]);
    }

    printf(", espacios = %d, otros = %d", nWhites, nOthers);
    
}