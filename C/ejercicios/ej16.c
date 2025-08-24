/*4. Escriba un programa en C que pida dos números enteros al usuario, y determine cuál es
mayor, el primero o el segundo. Modifíquelo para considerar también la posibilidad de
que sean iguales.*/

#include <stdio.h>

int main(void) {

    int n1;
    int n2;

    printf("Dame dos numeros enteros para comprobar cual es mayor o si son iguales: \n\n");

    if (scanf("%d %d", &n1, &n2) == 1)
    {
        if (n1 > n2)
        {
            printf("\n%d es mayor que %d.", n1, n2);
        } else if (n2 > n1)
        {
            printf("\n%d es mayor que %d.", n2, n1);
        } else if (n1 == n2)
        {
            printf("\nAmbos numeros son iguales.");
        } else {
            printf("\nInserta un numero que sea valido.");
        }   
    } else {
        printf("\nIntroduce un numero que sea valido.");
    }
}