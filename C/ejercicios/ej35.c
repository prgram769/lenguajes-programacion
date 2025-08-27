/*8. Escriba un programa que lea tres enteros (a, b, c) y muestre por pantalla un 1 si los
valores introducidos siguen un orden creciente (a>b>c) y 0 en caso contrario.*/

#include <stdio.h>

int main(void) {
    int a,b,c;

    printf("Introduce 3 numeros enteros: \n\n");

    if (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a > b && b > c)
        {
            printf("\n1");
        } else {
            printf("\n0");
        }
        
    } else {
        printf("\nIntroduce valores validos.");
    }
    
}