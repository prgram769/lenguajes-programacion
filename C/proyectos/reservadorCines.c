/*Objetivo: Un sistema simple de reserva de asientos para una sala de cine.
Requisitos:

    Mostrar un mapa de asientos (matriz 5x5).

    Permitir al usuario seleccionar un asiento (fila y columna).

    Marcar asientos ocupados y disponibles.

    No permitir reservar un asiento ya ocupado.

    Mostrar confirmación de reserva.*/

#include <stdio.h>

char charge(char chairs[5][5]) {
    int f1, c1;
    
    printf("\nMensaje antes de cargar los asientos: Las O son asientos vacios y las X son asientos ocupados.\n\n");

    for (int f = 0; f < 5; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("[%c]", chairs[f][c]);
        }
        printf("\n"); 
        
    }

    printf("\nDime la fila y la columna respectivamente del asiento que quieres: \n\n");

    if (scanf("%d %d", &f1, &c1) == 2)
    {
        int option;
        int confirmOption;

        printf("\n¿Estas seguro/a de que quieres ese asiento?\n1. Si. 2. No.\n\n");

        if (scanf("%d", &confirmOption) == 1)
        {
            if (confirmOption == 1)
            {
                chairs[f1][c1] = 'X';
            } else if (confirmOption == 2)
            {
                printf("\nSaliendo...\n\n");
            } else {
                printf("\nDebes introducir un valor contemplado.");
            }   
        } else {
            printf("\nDebes introducir valores validos.\n");
        }

        printf("\n¿Quieres añadir otro asiento?\n 1. Si. 2. No.\n\n");

        if (scanf("%d", &option) == 1)
        {
            if (option == 1)
            {
                while (option == 1)
                {
                    printf("\nDime la fila y la columna respectivamente del asiento que quieres: \n\n");

                    if (scanf("%d %d", &f1, &c1) == 2)
                    {
                        if (chairs[f1][c1] == 'X')
                        {
                            printf("\nEse asiento ya está ocupado, debes elegir otro");
                        } else {
                            int confirmOption;

                            printf("\n¿Estas seguro/a de que quieres ese asiento?\n1. Si. 2. No.\n\n");

                            if (scanf("%d", &confirmOption) == 1)
                            {
                                if (confirmOption == 1)
                                {
                                    chairs[f1][c1] = 'X';
                                } else if (confirmOption == 2)
                                {
                                    printf("\nSaliendo...\n\n");
                                } else {
                                    printf("\nDebes introducir valores contemplados\n.");
                                }
                                
                            } else {
                                printf("\nDebes introducir valores validos.");
                            }
                            
                        }
                        
                    } else {
                        printf("\nDebes introducir valores validos.\n");
                    }

                    printf("\n¿Quieres añadir otro asiento?\n 1. Si. 2. No.\n\n");

                    scanf("%d", &option);

                    printf("\n");
                }
                
            } else if (option == 2)
            {
                printf("\nSaliendo...\n\n");
            } else {
                printf("\nError, ese valor no esta contemplado, debes elegir uno que si lo esté.");
            }         
        } else {
            printf("\nDebes introducir valores validos.\n");
        }
        
    } else {
        printf("\nDebes introducir valores validos.\n\n");
    }
    
    for (int f = 0; f < 5; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("[%c]", chairs[f][c]);
        }
        printf("\n"); 
        
    }

}

int main(void) {
    int option;
    char chairs[5][5] = {
        {'O','O','O','O','O'},
        {'O','O','O','O','O'},
        {'O','O','O','O','O'},
        {'O','O','O','O','O'},
        {'O','O','O','O','O'}
    };
    
    printf("--SISTEMA RESERVA ASIENTOS--\n\n");
    printf("¿Quieres reservar un asiento?\n 1. Si. 2. No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            charge(chairs);
        } else if(option == 2) {
            printf("\nSaliendo...");
            
            return 0;
        } else {
            printf("\nError, debes introducir un valor valido dentro de las opciones contempladas.");
        }
    } else {
        printf("\nIntroduce valores validos.");
    }
    
}