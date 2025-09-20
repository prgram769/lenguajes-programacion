/*imprime la tabla fahrenheit-celsius*/

#include <stdio.h>

int main(void) {
    int fahrenheit, celsius;
    int lowerLimit = 0;
    int upperLimit = 300;
    int step = 20; /*tamaño de incremento*/

    fahrenheit = lowerLimit;

    while (fahrenheit <= upperLimit)
    {
        celsius = 5 * (fahrenheit - 32) / 9;

        printf("%d\t%d\n", fahrenheit, celsius);

        fahrenheit = fahrenheit + 20;
    }
    
}