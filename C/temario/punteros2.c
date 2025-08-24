#include <stdio.h>

int main(void) {
    int edad = 37;
    int *direccion = &edad;

    printf("%u", *direccion);
}