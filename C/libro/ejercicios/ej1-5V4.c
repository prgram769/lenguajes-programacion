/*Escriba un programa de conversion de temperaturas de manera 
que escriba la tabla en orden inverso, esto es desde 300 grados a 0 grados*/

#include <stdio.h>

int main(void) {
    int celsius, fahrenheit;

    printf("Celsius\tFahrenheit\n");

    for (celsius = 300; celsius >= 0; celsius -= 20)
    {
        fahrenheit = celsius * 9 / 5 + 32;

        printf("%5d\t%6d\n", celsius, fahrenheit);
    }
    
}