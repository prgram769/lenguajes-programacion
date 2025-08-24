/*2. Escriba un programa en C que pida dos números enteros al usuario, y determine si el
primero es divisible entre el segundo.*/

#include <stdio.h>

int main(void) {
    
    int n1;
    int n2;
    
    printf("Dame dos numeros enteros: \n\n");

    scanf("%d %d", &n1, &n2);

    int rest = n1 % n2;

    if (rest == 0)
    {
        printf("\nEl primer numero es divisible entre el segundo");
    } else {
        printf("\nEl primer numero no es divisible entre el segundo");
    }
}