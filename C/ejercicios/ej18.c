/*6. Dada la función f(x), realizar un programa C que calcule dicha función para un valor
dado de x y lo muestre por pantalla.
     {
        x + 3 para x ≤ 0
f(x)
        x2 + 2x para x > 0
     }
       */

#include <stdio.h>

int main(void) {

    int x;

    printf("Introduce un numero entero para el cual evaluar la funcion f(x): \n\n");

    scanf("%d", &x);

    if (x <= 0)
    {
        x = x + 3;

        printf("\nDado el valor de x, ahora x vale: %d debido a que su funcion es x + 3.", x);
    } else if (x > 0)
    {
        x = x * 2 + 2 * x;

        printf("\nDado el valor de x, ahora x vale: %d debido a que su funcion es x2 + 2x.", x);
    }
}