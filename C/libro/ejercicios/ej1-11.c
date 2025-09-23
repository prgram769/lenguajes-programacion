/*¿Como probaria el programa para contar palabras?¿Que clase de entrada es la mas conveniente para descubrir errores si estos existen?*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char test1[50] = "hola que tal\n";
    char test2[50] = "hola  \tque tal\nhola\n";
    char test3[50] = "hola\tque tal\n";

    int nOfCharacters, nOfWords, nOfLines, i;

    nOfCharacters = nOfWords = nOfLines = i = 0;

    while (test1[i] != '\0')
    {
        char character = test1[i];
        
        nOfCharacters++;

        if (character == ' ' || character == '\t')
        {
            nOfWords++;
        }
        
        if (character == '\n')
        {
            nOfLines++;
        }

        i++;
    }

    printf("El numero de caracteres del test 1 es %d, el de palabras, %d, y el de lineas, %d\n", nOfCharacters, nOfWords, nOfLines);

    nOfCharacters = nOfWords = nOfLines = i = 0;

    while (test2[i] != '\0')
    {
        char character = test2[i];

        nOfCharacters++;

        if (character == ' ' || character == '\t')
        {
            nOfWords++;
        }
        
        if (character == '\n')
        {
            nOfLines++;
        }
        
        i++;
    }

    printf("\nEl numero de caracteres del test 2 es %d, el de palabras, %d, y el de lineas, %d\n", nOfCharacters, nOfWords, nOfLines);

    nOfCharacters = nOfWords = nOfLines = i = 0;

    while (test3[i] != '\0')
    {
        char character = test3[i];

        nOfCharacters++;

        if (character == ' ' || character == '\t')
        {
            nOfWords++;
        }
        
        if (character == '\n')
        {
            nOfLines++;
        }

        i++;
        
    }

    printf("\nEl numero de caracteres del test 3 es %d, el de palabras %d, y el de lineas, %d", nOfCharacters, nOfWords, nOfLines);
    
}