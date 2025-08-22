/*Objetivo: Desarrollar una calculadora de consola en C para operaciones aritméticas básicas.
Requisitos:

    Soporte para operadores: + (suma), - (resta), * (multiplicación), / (división).

    Interfaz interactiva: el usuario debe ingresar dos números y el operador uno tras otro.

    Validación de división por cero: mostrar un mensaje de error claro si se intenta dividir entre cero.

    Formato de salida: mostrar el resultado con dos decimales (ej: 5.00 + 3.00 = 8.00).

    Código modular: usar funciones para organizar la lógica (ej: sumar(), dividir()).*/

#include <stdio.h>
#include <string.h>

int main(void){
    char operator[1];
    float n1;
    float n2;

    scanf("%g %1s %g", &n1, &operator, &n2);

    if (strcmp(operator, "+") == 0)
    {
        float total = n1 + n2;

        printf("La suma de %g y %g es: %g", n1, n2, total);
    } else if (strcmp(operator, "-") == 0)
    {
        float total = n1 - n2;

        printf("La resta de %g y %g es: %g", n1, n2, total);
    } else if (strcmp(operator, "*") == 0)
    {
        float total = n1 * n2;

        printf("La multiplicacion de %g y %g es: %g", n1, n2, total);
    } else if (strcmp(operator, "/") == 0)
    {
        float total = n1 / n2;

        printf("La division de %g y %g es: %g", n1, n2, total);

        if (n1 == 0 || n2 == 0)
        {
            printf("No es posible dividir entre cero, vuelve a ejecutar y realiza otra operacion.");
        }
        
    } else if (strcmp(operator, "%") == 0)
    {
        int myN1 = (int)n1;
        int myN2 = (int)n2;
        int total = myN1 % myN2;

        printf("El modulo de %d y %d es: %d", myN1, myN2, total);
    } else {
        printf("El operador aritmetico no es valido para el calculo");
    }
}