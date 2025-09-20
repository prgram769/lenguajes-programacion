/*Escriba un programa de conversion de temperaturas de manera 
que escriba la tabla en orden inverso, esto es desde 300 grados a 0 grados*/

#include <stdio.h>

int main(void) {
    float fahrenheit;

    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20)
    {
        float celsius = 5 * (fahrenheit - 32) / 9;

        printf("%6.0f\t%14.1f\n", fahrenheit, celsius);
    }
    
}