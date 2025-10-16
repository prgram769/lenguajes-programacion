#include <stdio.h>

int main(void) {
    __int8_t n1 = 100;
    __int16_t n2 = 30000;
    __int32_t n3 = 1000000;
    __int64_t n4 = 9000000000;

    printf("El entero de 8 bits es: %d\n", n1);
    printf("El entero de 16 bits es: %d\n", n2);
    printf("El entero de 32 bits es: %d\n", n3);
    printf("El entero de 64 bits es: %ld\n", n4);
}