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
    srand(time(NULL));

    int randnum = rand() % 2;
    int userNum;
    int option;

    printf("---Piedra, papel y tijera.---\n\n");
    printf("Ingresa un numero.\n0. Piedra. 1. Papel. 2. Tijera.\n\n");

    if (scanf("%d", &userNum) == 1)
    {
        switch (userNum)
        {
        case 0:
            if (randnum == 0)
            {
                printf("\nEmpate.\n\n");
            } else if (randnum == 1)
            {
                printf("\nHas perdido.\n\n");
            } else if (randnum == 2)
            {
                printf("\nHas ganado.\n\n");
            }
            break;
        case 1:
            if (randnum == 0)
            {
                printf("\nHas ganado.\n\n");
            } else if (randnum == 1)
            {
                printf("\nEmpate.\n\n");
            } else if (randnum == 2)
            {
                printf("\nHas perdido.\n\n");
            }
            break;
        case 2:
            if (randnum == 0)
            {
                printf("\nHas perdido.\n\n");
            } else if (randnum == 1)
            {
                printf("\nHas ganado.\n\n");
            } else if (randnum == 2)
            {
                printf("\nEmpate.\n\n");
            }
            break;
        default:
            printf("\nDebes introducir un valor valido.");
            break;
        }
        printf("¿Quieres jugar de nuevo?\n1. Si. 2. No.\n\n");

        if (scanf("%d", &option) == 1)
        {
            if (option == 1)
            {
                main();
            } else if (option == 2)
            {
                printf("\nSaliendo...");
                
                return 0;
            } else {
                printf("\nDebes introducir un valor valido.");
            }
        } else {
            printf("\nIngresa un valor valido.");
        }
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}