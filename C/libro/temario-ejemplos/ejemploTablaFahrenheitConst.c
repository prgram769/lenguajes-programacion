#include <stdio.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 300
#define STEP 20

int main(void) {
    float fahrenheit;

    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = LOWER_LIMIT; fahrenheit <= UPPER_LIMIT; fahrenheit += STEP)
    {
        float celsius = 5 * (fahrenheit - 32) / 9;

        printf("%5.0f\t%14.1f\n", fahrenheit, celsius);
    }
    
}