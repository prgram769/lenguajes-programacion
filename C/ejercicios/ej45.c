/*8. Escriba un programa que eleve un número a una potencia, utilizando dos métodos: a)
utilizando la función potencia y b) usando un bucle, sin recurrir al operador potencia.
Nota: En C, para poder usar la función potencia (pow(x, y)=xy) es necesario incluir la
biblioteca math (#include <math.h>).*/

#include <stdio.h>
#include <math.h>

int main(void) {

    int n1;

    printf("Introduce un numero entero: \n\n");

    if (scanf("%d", &n1) == 1)
    {
        int potence = 6;

        float result = pow(n1, potence);

        printf("La potencia es %d", result);

        int base = n1;
        int exponente = 6;
        int resultado = 1; // Inicializar el resultado a 1

        // Bucle para calcular la potencia
        for (int i = 0; i < exponente; i++) {
            resultado = resultado * base; // Multiplica el resultado por la base
        }

        printf("El resultado de %d elevado a %d es: %d\n", base, exponente, resultado); // Imprime el resultado
        
    } else {
        printf("\nIntroduce valores validos.");
    }
    
}