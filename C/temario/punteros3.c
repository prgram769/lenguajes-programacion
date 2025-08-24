#include <stdio.h>

int main(void) {
    int edad;
    int *direccion = &edad;

    *direccion = 37;

    printf("%u", *direccion);
}