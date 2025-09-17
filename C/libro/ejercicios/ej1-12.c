/*Escriba un programa que imprima a su entrada una palabra por linea*/

#include <stdio.h>

int main(void) {
    int character;
    
    while ((character = getchar()) != EOF)
    {
        if (character != ' ' || character != '\t' || character != '\n')
        {
            putchar(character);

        } else {

            putchar(character);
            
            printf("\n");
        }

        /*Este codigo anterior hace verificar que si caracter no es un espacio \t o \n, entonces muestra caracter, en caso de que si sea,
        muestra caracter y pone un salto de linea*/
        
    }
    
}