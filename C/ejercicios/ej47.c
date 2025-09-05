/*10. Escriba un programa en C que solicite números al usuario hasta que se hayan
introducido 10 números o la suma de todos los números leídos sea mayor que 100. A
continuación mostrar un mensaje indicando qué condición se ha cumplido (es decir, si
se han introducido 10 números o si su suma es mayor que 100).*/

#include <stdio.h>

int main(void) {
    int sum = 0;
    int i = 0;
    int n1[10];

    while (i != 10 && sum < 100)
    {
        printf("\nIntroduce un numero entero: \n\n");

        if (scanf("%d", &n1[i]) == 1)
        {
            sum = sum + n1[i];
            i++;
        } else {
            printf("\nDebes introducir valores validos.");
        }
    }    

    if (i == 10)
    {
        printf("\nHas llegado al limite de numeros.\n");
    } else if (sum >= 100)
    {
        printf("\nLa suma de los numeros es superior a 100.");
    }
}