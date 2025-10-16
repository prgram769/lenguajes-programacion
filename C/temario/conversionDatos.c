#include <stdio.h>

int main(void) {
    float sum = 5 / 2;

    printf("La suma es %.2f\n", sum);

    sum = (float) 5 / 2; // esto es una conversion de tipo explicita

    printf("La suma es %.2f\n", sum);

    float myFloat = 9; // esto es un ejemplo de una conversion de tipo implicita

    printf("Una conversion a float %f\n", myFloat);
}