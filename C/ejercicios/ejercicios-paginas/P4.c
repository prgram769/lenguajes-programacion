/*Write a Program to Swap the values of two variables.*/

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Dame dos numeros enteros.");

    if (scanf("%d %d", &n1, &n2) == 2)
    {
        printf("\nHas introducido primero este numero: %d y después este: %d, a continuacion vamos a hacer el cambio", n1, n2);

        int nAux = n1;
        int nAux2 = n2;

        n1 = nAux2;
        n2 = nAux;

        printf("\nDespues del cambio, el primer valor es %d y el segundo es: %d", n1, n2);
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}