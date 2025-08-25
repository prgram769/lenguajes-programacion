/*8. Escriba un programa que solicite un número, y si éste es de dos cifras, muestre por
pantalla los siguientes valores:
 Suma de sus dos dígitos.
 Cuántos de sus dígitos son pares.
Nota: para saber si es de dos cifras, compárelo con 9 y 99. Para calcular los dígitos use
la división entera y el resto.*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Introduce un numero entero: \n\n");

    if (scanf("%d", &n) == 1)
    {
        if (n > 9 && n <= 99)
        {
           int n1 = n % 10;
           int n2 = n / 10;
           int sum = n2 + n1;

           printf("\nLa suma de las dos cifras separadas es: %d\n", sum);

           if (n2 % 2 == 0)
           {
            printf("\n%d es par.\n", n2);
           } else {
            printf("\n%d no es par.\n", n2);
           }
           if (n1 % 2 == 0)
           {
            printf("\n%d es par.", n1);
           } else {
            printf("\n%d no es par.", n1);
           }
        } else {
            printf("\nIntroduce un valor valido.");
        }
    } else {
        printf("\nIntroduce un valor valido.");
    }
}