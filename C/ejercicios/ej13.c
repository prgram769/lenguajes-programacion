/*1. Escriba un programa que lea un número entero y escriba un mensaje si el número es
mayor que 100*/

#include <stdio.h>

int main(void) {
    int n1;

    printf("Introduce un numero entero: \n\n");

    scanf("%d", &n1);

    if (n1 > 100)
    {
        printf("\nEl numero es mayor que 100");
    } else {
        printf("\nEl numero no es mayor que 100");
    }
    
}