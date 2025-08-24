#include <stdio.h>

int main(void) {
    int precios[3] = {5,4,3};

    printf("%u\n\n", *precios);
    printf("%u\n\n", *(precios + 1));
    printf("%u", *(precios + 2));
}