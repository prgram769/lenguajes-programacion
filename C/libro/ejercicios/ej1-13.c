/*Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. Es facil dibujar el 
el histograma con las barras horizontales pero es un desafio con las verticales*/

#include <stdio.h>

int main(void) {
    int character, wordSize, characterBefore, nOfWords, i;

    wordSize = nOfWords = characterBefore = i = 0;
    
    int words[50];

    while ((character = getchar()) != EOF)
    {
        if (character != ' ' && character != '\t' && character != '\n')
        {
            wordSize++;

            words[i] = wordSize;

            printf("%d\n",words[i]);

            i++;

            printf("%d",words[i]);

            characterBefore = 'l';
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
        printf("|\n");
    }
    
}