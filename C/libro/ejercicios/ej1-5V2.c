/*Escriba un programa de conversion de temperaturas de manera 
que escriba la tabla en orden inverso, esto es desde 300 grados a 0 grados*/

#include <stdio.h>

int main(void) {
    int celsius, fahrenheit;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    celsius = upperLimit;

    printf("Celsius\tFahrenheit\n");

    while (celsius >= 0)
    {
        fahrenheit = (celsius * 9 / 5) + 32;

        printf("%5d\t%6d\n", celsius, fahrenheit);

        celsius -= step;
    }
    
}