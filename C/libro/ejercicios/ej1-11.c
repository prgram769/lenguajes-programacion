/*¿Como probaria el programa para contar palabras?¿Que clase de entrada es la mas conveniente para descubrir errores si estos existen?*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char test1[50] = "hola que tal\n";
    char test2[50] = "hola  \tque tal\nhola\n";
    char test3[50] = "hola\tque tal\n";

    int nOfCharacters, nOfWords, nOfLines, characterBefore, i;

    nOfCharacters = nOfWords = nOfLines = i = 0;

    /*En los bucles que van a venir a continuacion, voy a recorrer letra por letra de un string, despues
    aumentare el numero de caracteres y hare comprobaciones de que el caracter sea distinto de un espacio tabulador o linea nueva
    en caso de que eso sea asi se pondra a caracter anterior como 'l' y despues comprobare si el caracter es espacio, en caso de que si,
    comprobare de que el caracter anterior sea una letra, si eso es asi sumare 1 al contador de palabras y cambiare el caracter anterior a 's'
    y por ultimo comprobare si hay salto de linea, si eso es asi incrementare en 1 el valor del contador del numero de lineas, despues comprobare
    si el caracter anterior era una letra y si era asi incrementare en 1 la variable contador de palabras*/
    
    while (test1[i] != '\0')
    {
        char character = test1[i];
        
        nOfCharacters++;

        if (character != ' ' && character != '\t' && character != '\n')
        {
            characterBefore = 'l';
        }

        if (character == ' ' || character == '\t')
        {
            if (characterBefore == 'l')
            {
                nOfWords++;
            }

            characterBefore = 's';
        }

        if (character == '\n')
        {
            nOfLines++;

            if (characterBefore == 'l')
            {
                nOfWords++;
            }
            
        }

        i++;
        
    }

    printf("El numero de caracteres del test 1 es %d, el de palabras, %d, y el de lineas, %d\n", nOfCharacters, nOfWords, nOfLines);

    nOfCharacters = nOfWords = nOfLines = characterBefore = i = 0;

    while (test2[i] != '\0')
    {
        char character = test2[i];

        nOfCharacters++;

        if (character != ' ' && character != '\t' && character != '\n')
        {
            characterBefore = 'l';   
        }

        if (character == ' ' || character == '\t')
        {
            if (characterBefore == 'l')
            {
                nOfWords++;
            }
            
            characterBefore = 's';
        }

        if (character == '\n')
        {
            nOfLines++;

            if (characterBefore == 'l')
            {
                nOfWords++;
            }
            
        }
        
        i++;
    }

    printf("\nEl numero de caracteres del test 2 es %d, el de palabras, %d, y el de lineas, %d\n", nOfCharacters, nOfWords, nOfLines);

    nOfCharacters = nOfWords = nOfLines = i = 0;

    while (test3[i] != '\0')
    {
        char character = test3[i];

        nOfCharacters++;

        if (character != ' ' && character != '\t' && character != '\n')
        {
            characterBefore = 'l';
        }
        
        if (character == ' ' || character == '\t')
        {
            if (characterBefore == 'l')
            {
                nOfWords++;
            }
            
            characterBefore = 's';
        }

        if (character == '\n')
        {
            nOfLines++;

            if (characterBefore == 'l')
            {
                nOfWords++;
            }
        }
        
        i++;
        
    }

    printf("\nEl numero de caracteres del test 3 es %d, el de palabras %d, y el de lineas, %d", nOfCharacters, nOfWords, nOfLines);
    
}