#include <stdio.h>

/*cuenta lineas, palabras y caracteres de la entrada*/
int main(void) {
    int character, nOfLines, nOfWords, nOfCharacters, state;

    nOfCharacters = nOfWords = nOfLines = 0;

    while ((character = getchar()) != EOF)
    {
        nOfCharacters++;

        if (character == ' ' || character == '\t' || character == '\n')
        {
            nOfWords++;
        }
        
        if (character == '\n')
        {
            nOfLines++;
        }
        
    }

    printf("\nEl total de caracteres es de %d, el de palabras es de %d y el de lineas es de %d", nOfCharacters, nOfWords, nOfLines);
    
}