/*1. Escriba una función que devuelva el resultado de elevar un número (declarado como
entero) a cualquier potencia (valor entero). El resultado de este cálculo debe ser de
tipo long.*/

#include <stdio.h>
#include <math.h>

long potence(long n, long p) {
    long result;

    result = pow(n, p);

    return result;
}

int main(void) {
    int n;
    int p;
    
    printf("Introduce un numero:\n\n");

    if (scanf("%d", &n) == 1)
    {
        printf("\nIntroduce el valor al que quieres elevar ese numero:\n\n");
        
        if (scanf("%d", &p) == 1)
        {
            printf("\nEl resultado de tu elevacion es: %ld", potence(n, p));
        } else {
            printf("\nDebes introducir valores validos.");
        }
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}