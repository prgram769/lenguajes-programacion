/*Escribe un programa que copie su entrada a la salida, reemplazando cada cadena de uno o mas blancos por un solo blanco*/

#include <stdio.h>

int main(void) {
    int c;
    int characterBefore;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            if (c != '\t')
            {
                putchar(c);

                characterBefore = 'l';
            }
            
        }

        if (c == ' ')
        {
            if (characterBefore == 'l')
            {
                printf(" ");
                
                characterBefore = 'b';
            }
            
        }

        if (c == '\t')
        {
            if (characterBefore == 'l')
            {
                printf(" ");

                characterBefore = 'b';
            }
            
        }
        
        
        
    }
       
}