/*Objetivo: Desarrollar una calculadora de consola en C para operaciones aritméticas básicas.
Requisitos:

    Soporte para operadores: + (suma), - (resta), * (multiplicación), / (división).

    Interfaz interactiva: el usuario debe ingresar dos números y el operador uno tras otro.

    Validación de división por cero: mostrar un mensaje de error claro si se intenta dividir entre cero.

    Formato de salida: mostrar el resultado con dos decimales (ej: 5.00 + 3.00 = 8.00).

    Código modular: usar funciones para organizar la lógica (ej: sumar(), dividir()).*/

#include <stdio.h>

float sum(float n1, float n2){
    return n1 + n2;
}

float rest(float n1, float n2){
    return n1 - n2;
}

float multiplication(float n1, float n2){
    return n1 * n2;
}

float division(float n1, float n2){
    if (n2 == 0)
    {
        printf("No es posible dividir entre 0, ejecuta de nuevo y realiza otra operacion");
    } else {
        return n1 / n2;
    }
    
}

int module(float n1, float n2){
    int myN1 = (int)n1;
    int myN2 = (int)n2;

    return myN1 % myN2;
}

int main(void){

    char operator;
    float n1, n2;

    scanf("%g %c %g", &n1, &operator, &n2);

    switch (operator)
    {
    case '+':
        printf("%g + %g = %g", n1, n2, sum(n1, n2));
        break;
    case '-':
        printf("%g + %g = %g", n1, n2, rest(n1, n2));
        break;
    case '*':
        printf("%g + %g = %g", n1, n2, multiplication(n1, n2));
        break;
    case '/':
        printf("%g + %g = %g", n1, n2, division(n1, n2));
        break;
    case '%':
        printf("%d + %d = %d", n1, n2, module(n1, n2));
        break;
    default:
        printf("Pon un operador aritmetico adecuado.");
        break;
    }
}