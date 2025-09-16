/*Escriba un programa que copie su entrada a la salida, reemplazando cada tabulacion por \t, cada retroceso por \b y cada diagonal invertida por \\*/

#include <stdio.h>

int main(void) {
    int entry;

    while ((entry = getchar()) != EOF)
    {
        if (entry == '\t')
        {
            putchar('\\');
            putchar('t');
        } else if (entry == '\b')
        {
            putchar('\\');
            putchar('b');
        } else if (entry == '\\')
        {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(entry);
        }
    }
    
}