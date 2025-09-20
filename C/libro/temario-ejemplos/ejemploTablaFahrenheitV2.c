/*imprime la tabla fahrenheit-celsius*/

#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;
    int lowerLimit = 0;
    int upperLimit = 300;
    int step = 20; /*tamaño de incremento*/

    fahrenheit = lowerLimit;

    while (fahrenheit <= upperLimit)
    {
        celsius = 5 * (fahrenheit - 32) / 9;

        printf("%3.0f\t%6.1f\n", fahrenheit, celsius); /*para organizar los numeros a la derecha*/

        fahrenheit = fahrenheit + step;
    }
    
}