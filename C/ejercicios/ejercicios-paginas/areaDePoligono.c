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
        float base, high;

        printf("\nGive me the base and the high of the triangle: ");

        if (scanf("%f %f", &base, &high) == 2)
        {
            float area = base * high / 2;

            return area;
        } else {
            printf("\nYou must enter valid data.\n");

            return 0;
        }
        
    } else if (polygon == 2)
    {
        float side;

        printf("\nGive me the side of the square: ");

        if (scanf("%f", &side) == 1)
        {
            float area = side * side;

            return area;
        } else {
            printf("\nYou must enter valid data.\n");

            return 0;
        }
        
    } else if (polygon == 3)
    {
        float base, high;

        printf("\nGive me the base and the high of the rectangle: ");

        if (scanf("%f %f", &base, &high) == 2)
        {
            float area = base * high;

            return area;
        } else {
            printf("\nYou must enter valid data.\n");

            return 0;
        }
        
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
        if (option == 1)
        {
            printf("\nThe area of triangle like the measures is %.2f", polygonArea(option));
        } else if (option == 2)
        {
            printf("\nThe area of the square like the measures is %.2f", polygonArea(option));
        } else if (option == 3)
        {
            printf("\nThe area of the rectangle like the measures is %.2f", polygonArea(option));
        }
        
    } else {
        printf("\nYou must enter valid data.");
    }
    
    return 0;
}