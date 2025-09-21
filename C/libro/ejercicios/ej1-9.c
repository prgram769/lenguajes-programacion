/*Escribe un programa que copie su entrada a la salida, reemplazando cada cadena de uno o mas blancos por un solo blanco*/

#include <stdio.h>

int main(void) {
    int character, characterBefore;

    while ((character = getchar()) != EOF)
    {
        if (character != ' ' && character != '\t')
        {
            putchar(character);

            characterBefore = 'l';
        }
        
        if (character == ' ' || character == '\t')
        {
            if (characterBefore == 'l')
            {
                printf(" ");

                characterBefore = 'b';
            }
            
        }
        
    }
}