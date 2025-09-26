/*Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. Es facil dibujar el 
el histograma con las barras horizontales pero es un desafio con las verticales*/

#include <stdio.h>

int main(void) {
    int character, wordSize, characterBefore, nOfWords, i;
    int words[50];

    character = wordSize = characterBefore = nOfWords = i = 0;

    for (i = 0; i < 50; i++)
    {
        words[i] = 0;
    }

    i = 0;
    
    while ((character = getchar()) != EOF)
    {
        if (character != ' ' && character != '\t' && character != '\n')
        {
            if (characterBefore != 's')
            {
                wordSize++;

                words[i] = wordSize;

                i++;

                characterBefore = 'l';
            } else if (characterBefore == 's')
            {
                words[i] = 0;

                i++;
            }
            
            
        }

        if (character == ' ' || character == '\t' || character == '\n')
        {
            if (characterBefore == 'l')
            {
                nOfWords++;
            }

            characterBefore = 's';
            
        }
        
        
    }

    printf("\nEl numero de palabras es %d\n\n", nOfWords);

    for (i = 0; i <= words[i]; i++)
    {
        if (words[i] == 0)
        {
            printf("\t");
        }
        
        printf("|\n");
    }
    
}