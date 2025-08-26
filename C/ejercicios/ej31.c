/*4. ¿Cuál es el resultado de evaluar la siguiente expresión? Suponga que la variable n
tiene el valor 6.0 y la variable valor 2.0 y ambos son de tipo float. Escriba la expresión
equivalente a esta utilizando paréntesis.
minut = 25.0 + 120 * n / valor*/

#include <stdio.h>

int main(void) {
    float n1 = 6;
    float valor = 2;
    float minut = (25 + 120) * n1 / valor;

    printf("El resultado de esa expresion es %.2f", minut);
}