/*3. Escriba un programa en C que pida un número al usuario e indique si es par o impar.
En caso de que sea par indicar si es o no múltiplo de 3.*/

#include <stdio.h>

int main(void) {
    
    int n1;

    printf("Dame un numero: \n\n");

    scanf("%d", &n1);

    int rest = n1 % 2;

    if (rest == 0)
    {
        int multiple = n1 % 3;

        if (multiple == 0)
        {
            printf("Este numero es multiplo de 3.");
        } else {
            printf("Este numero no es multiplo de 3");
        }
    } else {
        printf("Este numero no es par.");
    }
    
}