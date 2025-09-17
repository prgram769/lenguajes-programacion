/*¿Como probaria el programa para contar palabras?¿Que clase de entrada es la mas conveniente para descubrir errores si estos existen?*/

#include <stdio.h>

int main(void) {
    int option;

    printf("Dime que respuesta quieres dar: 1. a). 2. b).\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nPrimero, crear la variable contador que servira para contar palabras, luego con un if verificar que hay un espacio, un salto de linea o tabulacion y en caso de que asi sea, se incrementara la variable contadora de palabras");
        } else if (option == 2)
        {
            printf("\nIntroducir varios espacios, varias tabulaciones, espacios al inicio y al final escribir saltos de lineas y tabulaciones...");
        } else {
            printf("\nDebes introducir valores contemplados.");
        }
            
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}