/*imprime la tabla fahrenheit*/

#include <stdio.h>

int main(void) {
    int fahrenheit;
    float celsius = 5 * (fahrenheit + 32) / 9;

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
    {
        printf("%3d %6.1f\n", fahrenheit, celsius);
    }
    
}