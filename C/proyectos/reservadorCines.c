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
        while (option == 1)
        {
            
        }
        
    } else {
        printf("Introduce valores validos.\n");
    }
    
}

void imprimir(int mat[5][5]) {
    int f, c;

    for (f = 0; f < 5; f++)
    {
        for (f = 0; f < 5; f++)
        {
            printf("%i ", mat[f][c]);
        }
        printf("\n");
        
    }
    
}

int main(void) {
    int map[5][5];

    printf("---SISTEMA DE RESERVA DE ASIENTOS---\n\n");
    printf("-Mapa de asientos-\n[][][][][]\n[][][][][]\n[][][][][]\n[][][][][]\n[][][][][]\n\n");

     
}