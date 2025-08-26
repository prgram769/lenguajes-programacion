/*1. Escriba un programa que pida una temperatura en grados Farenheit y la pase a Celsius.
NOTA: celsius = (farenheit -32)*5/9*/

#include <stdio.h>

int main(void) {
    float fahrenheit;

    printf("Ingresa una temperatura en fahrenheit.\n\n");

    if (scanf("%f", &fahrenheit) == 1)
    {
        float celsius = (fahrenheit - 32) * 5 / 9;

        printf("\nLos %.2f ºF que has introducido en ºC son %.2f ºC.", fahrenheit, celsius);
    } else {
        printf("\nIntroduce un valor valido.");
    }
}