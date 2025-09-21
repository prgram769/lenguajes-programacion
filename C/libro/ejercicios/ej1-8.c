/*Escribe un programa que cuente espacios en blanco, tabuladores y nuevas lineas*/

#include <stdio.h>

int main(void) {
    int character, nOfSpaces, nOfTabs, nOfLines;

    nOfLines = nOfSpaces = nOfTabs = 0;

    while ((character = getchar()) != EOF)
    {
        if (character == ' ')
        {
            nOfSpaces++;
        } else if (character == '\t')
        {
            nOfTabs++;
        } else if (character == '\n')
        {
            nOfLines++;
        }
        
    }

    printf("\nEn lo introducido han habido un total de %d espacios, %d tabulaciones y %d nuevas lineas.\n", nOfSpaces, nOfTabs, nOfLines);
    
}