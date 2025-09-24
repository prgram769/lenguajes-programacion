/*Escriba un programa que imprima a su entrada una palabra por linea*/

#include <stdio.h>

int main(void) {
    int character;

    while ((character = getchar()) != EOF)
    {
        if (character != ' ' && character != '\t' && character != '\n')
        {
            putchar(character);
        }

        if (character == ' ' || character == '\t')
        {
            putchar('\n');
        }
        
    }
    
}