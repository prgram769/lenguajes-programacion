/*Escriba un programa de conversion de temperaturas de manera 
que escriba la tabla en orden inverso, esto es desde 300 grados a 0 grados*/

#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    fahrenheit = upperLimit;

    printf("Fahrenheit\tCelsius\n");

    while (fahrenheit >= 0)
    {
        celsius = 5 * (fahrenheit - 32) / 9;

        printf("%5.0f\t%14.1f\n", fahrenheit, celsius);

        fahrenheit -= step;
    }
    
}