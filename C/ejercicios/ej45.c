/*8. Escriba un programa que eleve un número a una potencia, utilizando dos métodos: a)
utilizando la función potencia y b) usando un bucle, sin recurrir al operador potencia.
Nota: En C, para poder usar la función potencia (pow(x, y)=xy) es necesario incluir la
biblioteca math (#include <math.h>).*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int n1;
    int result1;
    int exponente;
    int result2 = 1;
    
    printf("Introduce un numero entero y un exponente entero: \n\n");

    if (scanf("%d %d", &n1, &exponente) == 2)
    {
        printf("\nMetodo con funcion pow: \n\n");

        result1 = pow(n1, exponente);

        printf("El resultado con la funcion pow es: %d\n", result1);
        printf("\nMetodo con bucle: \n\n");

        for (int i = 0; i < exponente; i++)
        {
            result2 = result2 * n1;
        }

        printf("El resultado con el bucle es: %d", result2);
        
    } else {
        printf("\nIntroduzca valores validos.");
    }
}