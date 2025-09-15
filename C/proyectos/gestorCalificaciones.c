/*Requisitos:

    Ingresar 5 calificaciones de un estudiante.

    Calcular promedio.

    Asignar letra (A, B, C, D, F).

    Mostrar si aprobó o reprobó.*/

#include <stdio.h>

int main(void) {
    float c1, c2, c3, c4, c5;

    if (scanf("%f %f %f %f %f", &c1, &c2, &c3, &c4, &c5) == 5)
    {
        float average = (c1 + c2 + c3 + c4 + c5) / 5;
        
        if (average < 6)
        {
            printf("\nF");

            if (average >= 5)
            {
                printf("\nHa aprobado.");
            } else {
                printf("\nHa suspendido.");
            }

        } else if (average >= 6 && average < 7)
        {
            printf("\nD");
            printf("\nHa aprobado.");
        } else if (average >= 7 && average < 8)
        {
            printf("\nC");
            printf("\nHa aprobado.");
        } else if (average >= 8 && average < 9)
        {
            printf("\nB");
            printf("\nHa aprobado.");
        } else if (average >= 9 && average <= 100)
        {
            printf("\nA");
            printf("\nHa aprobado.");
        }
        
        
        
        
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}