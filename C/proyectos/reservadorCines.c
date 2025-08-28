/*Objetivo: Un sistema simple de reserva de asientos para una sala de cine.
Requisitos:

    Mostrar un mapa de asientos (matriz 5x5).

    Permitir al usuario seleccionar un asiento (fila y columna).

    Marcar asientos ocupados y disponibles.

    No permitir reservar un asiento ya ocupado.

    Mostrar confirmación de reserva.*/

#include <stdio.h>

void cargar(int mat[5][5]) {
    int f, c, option;

    printf("¿Quieres seleccionar un asiento?\n1. Si - 2. No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        printf("\nDime que asiento quieres elegir, me lo tienes que decir en este orden: fila y columna: \n\n");
            
        if (scanf("%d %d", &f, &c) == 2)
        {
            int option;

            mat[f][c] = 1;


                
        } else {
            printf("\nDebes introducir valores validos.");
        }
        
    } else {
        printf("Introduce valores validos.\n");
    }
    
}

void imprimir(int mat[5][5]) {
    int f, c;

    for (f = 0; f < 5; f++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%d", mat[f][c]);
            printf("\n");
        }
        
    }
    
    
}

int main(void) {
    int map[5][5];

    printf("---SISTEMA DE RESERVA DE ASIENTOS---\n\n");
    printf("-Mapa de asientos-\n[][][][][]\n[][][][][]\n[][][][][]\n[][][][][]\n[][][][][]\n\n");
    cargar(map);
    imprimir(map);

     
}