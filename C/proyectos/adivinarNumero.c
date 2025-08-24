/*Objetivo: Implementar un juego donde el usuario adivine un número generado aleatoriamente.
Requisitos:

    Generación aleatoria: número entre 1 y 100 (usar rand() y srand(time(NULL))).

    Pistas: indicar si el número ingresado es mayor o menor al objetivo.

    Intentos ilimitados: hasta que el usuario acierte.

    Contador de intentos: mostrar cuántos intentos tardó al final.

    Interfaz amigable: mensajes motivadores (ej: "¡Casi! Intenta con un número más alto").*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int randNum = rand() % 101;
    int userNum;
    int tries = 0;

    printf("\t---Juego de adivinar el numero---\n");
    printf("\nIngresa un numero a ver si adivinas el numero oculto: \n\n");

    scanf("%d", &userNum);
    
    while (userNum != randNum)
    {
        if (userNum > randNum)
        {
            printf("\nuff, intenta con un numero más bajo.\n\n");
            
            scanf("%d", &userNum);
            tries++;
        } else {
            printf("\nuff, intenta con un numero mas alto.\n\n");

            scanf("%d", &userNum);
            tries++;
        }
    }
    if (userNum == randNum)
    {
        int option;

        printf("\nFelicidades!! has encontrado el numero.\n");
        printf("\nHas hecho %d intentos\n", tries);
        printf("\n¿Quieres jugar de nuevo?\n\n");
        printf("1. Si.\n2. No\n\n");
        
        scanf("%d", &option);

        if (option == 1)
        {
            printf("\nPerfecto, cargando juego...\n\n");
            main();
        } else if (option == 2)
        {
            printf("\nSaliendo del juego.");
            return 0;
        } else {
            while (option != 1 && option != 2)
            {
                printf("\nIntroduce un valor valido.\n\n");

                scanf("%d", &option);
            }
        }
    }
        
}