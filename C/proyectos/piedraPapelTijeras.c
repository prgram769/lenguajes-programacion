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

int counterWins = 0;
int counterFails = 0;

int verification(void) {
    srand(time(NULL));

    int randnum = rand() % 2;
    int userNum;

    printf("---Piedra, papel y tijera.---\n\n");
    printf("Ingresa un numero:\n0. Piedra. 1. Papel. 2. Tijera.\n\n");

    if (scanf("%d", &userNum) == 1)
    {
        switch (userNum)
        {
        case 0:
            if (randnum == 0)
            {
                printf("\nEmpate.\n\n");
                printf("\n     ________\n---'\n\t ____)\n\t (_____)\n\t (_____)\n\t (____)\n---.__(___)\n\n");
            } else if (randnum == 1)
            {
                printf("\nHas perdido.\n\n");
                printf("\n     ________\n---'\n\t ____)\n\t (_____)\n\t (_____)\n\t (____)\n---.__(___)\n\n");

                counterFails++;
            } else if (randnum == 2)
            {
                printf("\nHas ganado.\n\n");
                printf("\n     ________\n---'\n\t ____)\n\t (_____)\n\t (_____)\n\t (____)\n---.__(___)\n\n");

                counterWins++;
            }
            break;
        case 1:
            if (randnum == 0)
            {
                printf("\nHas ganado.\n\n");
                printf("\n     _______\n---'    ____)_\n\t______)\n\t_______)\n\t_______)\n---.__________)\n\n");

                counterWins++;
            } else if (randnum == 1)
            {
                printf("\nEmpate.\n\n");
                printf("\n     _______\n---'    ____)_\n\t______)\n\t_______)\n\t_______)\n---.__________)\n\n");
            } else if (randnum == 2)
            {
                printf("\nHas perdido.\n\n");
                printf("\n     _______\n---'    ____)_\n\t______)\n\t_______)\n\t_______)\n---.__________)\n\n");

                counterFails++;
            }
            break;
        case 2:
            if (randnum == 0)
            {
                printf("\nHas perdido.\n\n");
                printf("\n    _______\n---'____)__\n\t______)\n\t__________)\n\t(____)\n---.__(___)\n\n");

                counterFails++;
            } else if (randnum == 1)
            {
                printf("\nHas ganado.\n\n");
                printf("\n    _______\n---'____)__\n\t______)\n\t__________)\n\t(____)\n---.__(___)\n\n");

                counterWins++;
            } else if (randnum == 2)
            {
                printf("\nEmpate.\n\n");
                printf("\n    _______\n---'____)__\n\t______)\n\t__________)\n\t(____)\n---.__(___)\n\n");
            }
            break;
        default:
            printf("\nDebes introducir un valor valido.");
            break;
        }
    } else {
        printf("\nDebes introducir valores validos.");
    }
}
int main(void) {

    int option;

    verification();

    printf("¿Quieres jugar de nuevo?\n1. Si. 2. No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        while (option == 1)
        {
            if (option == 1)
            {
                verification();

                printf("\n¿Quieres jugar de nuevo?\n1. Si. 2. No.\n\n");
                
                scanf("%d", &option);
            } else if (option == 2)
            {
                printf("\nSaliendo...");
                
                return 0;
            } else {
                printf("\nDebes introducir un valor valido.");
            }
            printf("\nHas tenido un total de %d victorias.\nHas tenido un total de %d derrotas.\n\n", counterWins, counterFails);
        } 
    } else {
        printf("\nIngresa un valor valido.");
    }
    
}