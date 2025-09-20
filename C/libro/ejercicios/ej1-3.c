/*modifique el programa de conversion de temperaturas de modo
que escriba un encabezado sobre la tabla*/

#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    fahrenheit = lowerLimit;

    printf("Fahrenheit\tCelsius\n");

    while (fahrenheit <= upperLimit)
    {
        celsius = 5 * (fahrenheit - 32) / 9;

        printf("%5.0f\t%14.1f\n", fahrenheit, celsius);

        fahrenheit = fahrenheit + step;
    }
    
}