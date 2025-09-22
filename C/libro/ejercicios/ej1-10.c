/*Escriba un programa que copie su entrada a la salida, reemplazando cada tabulacion por \t, cada retroceso por \b y cada diagonal invertida por \\*/

#include <stdio.h>

int main(void) {
    int character;

    while ((character = getchar()) != EOF)
    {
        if (character == '\t')
        {
            putchar('\\');

            putchar('t');
        } else if (character == '\b')
        {
            putchar('\\');

            putchar('b');
        } else if (character == '\\')
        {
            putchar('\\');

            putchar('\\');
        } else {
            putchar(character);
        }
    }
    
}