/*Objetivo: Un sistema simple para gestionar tareas diarias.
Requisitos:

    Permitir agregar tareas (máx. 10).

    Mostrar lista de tareas numeradas.

    Marcar tareas como completadas.

    Eliminar tareas.

    Interface en consola con menú de opciones.*/

#include <stdio.h>
#include <string.h>

char agree(char string) {
    int tasks[10];
    int i = 0;

    tasks[i] = string;
    i++;
}

char mark(void) {

}

char delete(void) {

}

char show(void) {

}

int main(void) {
    int option;

    printf("--Organizador de tareas--\n\n");
    printf("¿Que deseas hacer?\n1. Introducir una tarea. 2. Mostrar tareas. 3. Marcar tareas como completadas. 4. Eliminar tareas. 5. Salir.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nIntroduce la tarea que quieres meter al programa:\n\n");

            char string[50];

            if (fgets(string, sizeof(string), stdin) != NULL)
            {
                string[strcspn(string, "\n")] = 0;
            }
        } else if (option == 2)
        {
            /* code */
        } else if (option == 3)
        {
            /* code */
        } else if (option == 4)
        {
            /* code */
        } else if (option == 5)
        {
            printf("\nSaliendo...");

            return 0;
        } else {
            printf("\nDebes introducir un valor contemplado por el programa.\n");
        }
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}