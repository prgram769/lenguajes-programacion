/*13. Escriba un programa en C que solicite al usuario números positivos de tres o más cifras
y compruebe si son pares. Si el número introducido es positivo pero de una o dos
cifras, se solicitará un nuevo número. El programa finaliza cuando se introduce “0” o
un número negativo.*/

#include <stdio.h>

int main(void) {
    int n;
    int result;

    printf("Debes introducir un numero entero positivo de tres o mas cifras.\n\n");

    if (scanf("%d", &n) == 1)
    {

        while (n < 100)
        {
            printf("\nDebes introducir otra cifra:\n\n");

            scanf("%d", &n);
            
            if (n == 0 || n < 0)
            {
            printf("\nPrograma finalizado.\nSaliendo...");

            return 0;
            }
        }

        while (n >= 100)
        {
            result = n % 2;

            if (result == 0)
            {
                printf("\nEs par, introduce otro numero.\n\n");

                scanf("%d", &n);
            } else {
                printf("\nEs impar, introduce otro numero.\n\n");

                scanf("%d", &n);
            }

            if (n == 0 || n < 0)
            {
                printf("\nPrograma finalizado.\nSaliendo...");

                return 0;
            }

            while (n < 100)
            {
                printf("\nDebes introducir otra cifra:\n\n");

                scanf("%d", &n);
            }       
        }
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
}