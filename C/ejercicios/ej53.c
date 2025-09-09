/*2. Escriba una función que reciba dos números reales positivos como parámetros y
devuelva el máximo de los dos valores.*/

#include <stdio.h>

float max(float n1, float n2) {
    if (n1 < n2)
    {
        return n2;
    } else {
        return n1;
    }
}

int main(void) {
    float n1, n2;

    printf("Introduce dos numeros reales, que sean positivos:\n\n");

    if (scanf("%f %f", &n1, &n2) == 2)
    {
        if (n1 < 0 && n2 < 0)
        {
            printf("\nError: Has introducido valores negativos.\n");
        } else if (n1 == n2)
        {
            printf("\nAmbos numeros son iguales.\n");
        } else {
            printf("\nEl valor maximo introducido de %.2f y %.2f es %.2f", n1, n2, max(n1, n2));
        }
         
    } else {
        printf("\nDebes introducir valores validos.\n");
    }
    
}