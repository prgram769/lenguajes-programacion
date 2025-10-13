/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */

#include <stdio.h>

float polygonArea(int polygon) {
    if (polygon == 1)
    {
        /* code */
    } else if (polygon == 2)
    {
        /* code */
    } else if (polygon == 3)
    {
        /* code */
    } else {
        printf("\nYou must enter requered data.");
    } 

    return 0;
}

int main(void) {
    int option;

    printf("This program do the operation of calc the area of a polygon\n");
    printf("Tell me, which polygon do you want to calc the area?\n");
    printf("1. Triangle. 2. Square. 3. Rectangle.\n\n");

    if (scanf("%d", &option) == 1)
    {
        polygonArea(option);
    } else {
        printf("\nYou must enter valid data.");
    }
    
}