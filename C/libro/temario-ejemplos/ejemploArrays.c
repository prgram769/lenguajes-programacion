#include <stdio.h>

int main(void) {
    /*cuenta digitos espacios en blanco, tabuladores y saltos de linea*/

    int character, nOfSpaces, nOfTabs, nOfLines, nOfOthers, i;
    int nDigits[10];

    nOfSpaces = nOfTabs = nOfLines = nOfOthers = 0;

    for (i = 0; i < 10; i++)
    {
        nDigits[i] = 0;
    }
    
    while ((character = getchar()) != EOF)
    {
        if (character >= '0' && character <= '9')
        {
            nDigits[character - '0']++;
        } else if (character == ' ')
        {
            nOfSpaces++;
        } else if (character == '\t')
        {
            nOfTabs++;
        } else if (character == '\n')
        {
            nOfLines++;
        } else {
            nOfOthers++;
        }
        
    }

    printf("Digitos = ");

    for (i = 0; i < 10; i++)
    {
        printf("%d", nDigits[i]);
    }

    printf(", espacios = %d, tabuladores = %d, saltos de linea = %d y otros = %d", nOfSpaces, nOfTabs, nOfLines, nOfOthers);
    
    
}