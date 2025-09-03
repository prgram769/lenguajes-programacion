/*Objetivo: Implementar el clásico juego contra la computadora.
Requisitos:

    El usuario elige entre piedra, papel o tijera.

    La computadora elige aleatoriamente.

    Determinar el ganador según las reglas clásicas.

    Llevar un marcador de victorias y derrotas.

    Preguntar si se quiere jugar again.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int randnum = rand() % 2;
    int userNum;

    printf("---Piedra, papel y tijera.---\n\n");
    printf("Ingresa un numero.\n1. Piedra. 2. Papel. 3. Tijera.\n\n");

    if (scanf("%d", &userNum) == 1)
    {
        if (userNum == 1)
        {
            /* code */
        }
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}