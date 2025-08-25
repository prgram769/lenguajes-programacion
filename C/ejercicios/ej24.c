/*13. Escriba un programa en C que muestre el siguiente menú:
CALCULO DE AREAS
===========================
1 - Calcular el área de un triángulo
2 - Calcular el área de un trapecio
3 - Calcular el área de un rectángulo
Tras mostrar el menú, se solicitará al usuario que seleccione una opción. En función de
la opción seleccionada el programa deberá pedir los datos necesarios para calcular el
área, realizar el cálculo y mostrar el resultado por pantalla.
Nota: Recuerde que para usar la función raíz cuadrada (sqrt) debe incluir la librería
math.h.*/

#include <stdio.h>

float triangle(float base, float hight, float *direction) {
    *direction = base * hight / 2;

    return *direction;
}

float trapeze(float highBase, float minorBase, float hight, float *direction) {
    *direction = (highBase + minorBase) * hight / 2;

    return *direction;
}

float rectangle(float base, float hight, float *direction) {
    *direction = base * hight;

    return *direction;
}

int main(void) {
    int option;
    float area;

    printf("--Calculo de areas--\n====================\n\n");
    printf("1. Calcular el area de un triangulo. \n2. Calcular el area de un trapecio. \n3. Calcular el area de un rectangulo. \n4. Salir.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            float base;
            float hight;

            printf("\nIntroduce en este orden, base y altura en cm.\n\n");

            if (scanf("%f %f", &base, &hight) == 2)
            {
                triangle(base, hight, &area);

                printf("\nEl area del triangulo cuya base es %.2f cm y cuya altura es %.2f cm es %.2f cm2.", base, hight, area);
            } else {
                printf("\nIntroduce un valor valido.");
            }
        
        } else if (option == 2)
        {
            float highBase;
            float minorBase;
            float hight;

            printf("\nIntroduce en este orden las medidas de la base mayor, base menor y altura en cm: \n\n");

            if (scanf("%f %f %f", &highBase, &minorBase, &hight) == 3)
            {
                trapeze(highBase, minorBase, hight, &area);

                printf("\nEl area del trapecio cuya base mayor es %.2f cm, cuya base menor es %.2f cm y cuya altura es %.2f es %.2f cm2.", highBase, minorBase, hight, area);
            } else {
                printf("\nIntroduce valores validos.");
            }
            
        } else if (option == 3)
        {
            float base;
            float hight;

            printf("\nIntroduce en este orden las medidas de la base y la altura en cm: \n\n");

            if (scanf("%f %f", &base, &hight) == 2)
            {
                rectangle(base, hight, &area);

                printf("\nEl area del rectangulo cuya base es %.2f cm y cuya altura es %.2f cm es %.2f cm2.", base, hight, area);
            } else {
                printf("\nIntroduce valores validos.");
            }
            
        } else if (option == 4)
        {
            return 0;
        } else {
            printf("\nIngresa un valor valido.");
        }
    } else {
        printf("\nIngresa un valor valido.");
    }
}