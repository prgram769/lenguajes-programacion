/*Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. Es facil dibujar el 
el histograma con las barras horizontales pero es un desafio con las verticales*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int character, countOfCharacters, i;
    int word[MAX];

    countOfCharacters = 0;
    
    for (i = 0; i <= MAX; i++)
    {
        word[i] = 0;
    }
    
    while ((character = getchar()) != EOF)
    {
        if (character == ' ' || character == '\t' || character == '\n')
        {
            printf("| ");

            for (i = 0; i < countOfCharacters; i++)
            {
                printf("*");
            }

            printf("\n");

            countOfCharacters = 0;
            
        }

        if (character != ' ' && character != '\t' && character != '\n')
        {
            if (countOfCharacters > MAX)
            {
                character = '\n';

                printf("\nTe has excedido del numero maximo de caracteres.");

                countOfCharacters = 0;
            }

            if (countOfCharacters <= MAX)
            {
                word[countOfCharacters] = character;

                countOfCharacters++;
            }
            
        } else {
            word[countOfCharacters] += '\0';

            countOfCharacters = 0;
        }
        
    }
    
}
