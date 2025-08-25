/*12. Escriba un programa que pida al usuario un número entre el uno y el siete y muestre un
mensaje con el nombre del día correspondiente*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Introduce un numero entero entre el 1 y el 7: \n\n");

    if (scanf("%d", &n) == 1)
    {
        switch (n)
        {
        case 1:
            printf("\nEstamos a lunes.");
            break;
        case 2:
            printf("\nEstamos a martes.");
            break;
        case 3:
            printf("\nEstamos a miercoles.");
            break;
        case 4:
            printf("\nEstamos a jueves.");
            break;
        case 5:
            printf("\nEstamos a viernes.");
            break;
        case 6:
            printf("\nEstamos a sabado.");
            break;
        case 7:
            printf("\nEstamos a domingo.");
            break;
        default:
            printf("\nIngresa un valor valido.");
            break;
        }
    } else {
        printf("\nIntroduce un valor valido.");
    }
    
}