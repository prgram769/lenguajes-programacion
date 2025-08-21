/*11. Escriba un programa en C que convierta euros a dolares (1 euro = 1.286 dolares) y a
libras esterlinas (1 euro = 0,865 libras). Imprima los resultados por pantalla.*/

#include <stdio.h>

int main(void) {
    int euros;

    printf("Dime el numero de euros que quieres convertir: \n\n");

    scanf("%d", &euros);

    float dollars = euros * 1.286;
    float pounds = euros * 0.865;

    printf("\n%d euros en dolares son %g dolares y en libras esterlinas son %g libras", euros, dollars, pounds);
}