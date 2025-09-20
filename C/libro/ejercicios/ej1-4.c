/*Escriba un programa que imprima la tabla correspondiente Celsius a Fahrenheit*/

#include <stdio.h>

int main(void) {
    int celsius, fahrenheit;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    celsius = lowerLimit;

    printf("Celsius\tFahrenheit\n");

    while (celsius <= upperLimit)
    {
        fahrenheit = celsius * 9 / 5 + 32;

        printf("%4d\t%6d\n", celsius, fahrenheit);

        celsius = celsius + step;
    }
    
}