#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    int character, nOfCharacters, nOfWords, nOfLines, state;

    state = OUT;

    nOfCharacters = nOfWords = nOfLines = 0;

    while ((character = getchar()) != EOF)
    {
        ++nOfCharacters;

        if (character == '\n')
        {
            ++nOfLines;
        }

        if (character == ' ' || character == '\t' || character == '\n')
        {
            state = OUT;

            ++nOfWords;
        } else if (state == OUT)
        {
            state = IN;
        }
        
    }
    
    printf("El total de caracteres es %d, de palabras es %d y de lineas es %d", nOfCharacters, nOfWords, nOfLines);
}