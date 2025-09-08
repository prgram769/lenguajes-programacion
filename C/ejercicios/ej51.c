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
    char article[50];
    int option = 1;
    float units;
    float unitPrice;
    float sum;
    
    while (option == 1)
    {
        printf("\nIntroduce un articulo:\n\n");

        if (fgets(article, sizeof(article), stdin) != NULL)
        {
            article[strcspn(article, "\n")] = 0;
        }

        printf("\nIntroduce el numero de unidades que vas a comprar:\n\n");

        if (scanf("%f", &units) == 1)
        {
            if (units == 0 || units < 0)
            {
                printf("\nSaliendo...");
            } else {
                printf("\nDime el precio del articulo:\n\n");

                if (scanf("%f", &unitPrice) == 1)
                {
                    sum += units * unitPrice;

                    printf("\n¿Quieres introducir otro articulo?\n1. Si. 2. No.\n\n");

                    if (scanf("%d", &option) == 1)
                    {
                    }
                    
                } else {
                    printf("\nDebes introducir valores validos.\n");
                }
                
            }
            
        } else {
            printf("\nDebes introducir valores validos.\n");
        }
    }

    printf("\nEl importe total es: %.2f", sum);
    
}