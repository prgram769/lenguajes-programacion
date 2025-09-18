/*Escribe un programa para encontrar el tamaño de la int, flotar, doble y char.*/

#include <stdio.h>

int main(void) {
    printf("El tamaño de int es: %d\n", sizeof(int));
    printf("El tamaño de float es: %d\n", sizeof(float));
    printf("El tamaño de double es: %d\n", sizeof(double));
    printf("El tamaño de char es: %d", sizeof(char));
}