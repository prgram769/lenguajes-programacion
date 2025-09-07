/*14. Escriba un programa en C que permita calcular el importe de una factura, a partir de
una serie de artículos vendidos. Para ello, el programa irá preguntando para cada
artículo, la cantidad de unidades vendidas y el precio unitario.
El programa comprobará que tanto el precio como la cantidad son números positivos, y
en caso contrario volverá a solicitar los valores.
La lectura de artículos acabará cuando se introduzca un 0 en la primera pregunta.
Entonces se imprimirá por pantalla el importe total de la factura.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int articles[20];
    char article[20];
    int units;
    float unitPrice;
    float sum;
    int option = 1;

    while (option == 1)
    {
     printf("\nIntroduce un articulo.\n\n");

        if (fgets(article, sizeof(article), stdin) != NULL)
        {
            article[strspn(article, "\n")] = 0;

            printf("\nIntroduce las unidades que se han vendido.\n\n");

            if (scanf("%d", &units) == 1)
            {
                printf("\nIntroduce el precio de la unidad.\n\n");

                if (scanf("%f", &unitPrice) == 1)
                {
                    sum = units * unitPrice;

                    printf("\n¿Quieres añadir otro articulo?\n1. Si. 2. No.\n\n");

                    scanf("%d", &option);
                
                } else {
                    printf("\nDebes introducir valores validos.\n");
                }

                if (option == 1)
                {
                    
                }
                

            } else {
                printf("\nDebes introducir valores validos.\n");
            }
        
        }   
    } 
    
    if (option == 2)
    {
        printf("\nLa cuenta final de la factura total es: %d", sum);
    }

}