#include <stdio.h>

int main(void) {
    int n1, n2;

    n1 = 6;
    n2 = 3;

    int andBitwise = n1 & n2;

    printf("El operador & (bitwise) con los valores n1 y n2 retorna: %d\n", andBitwise);

    int orBitwise = n1 | n2;

    printf("El operador | (bitwise) con los valores n1 y n2 retorna: %d\n", orBitwise);

    int xorBitwise = n1 ^ n2;

    printf("El operadore ^ (bitwise) con los valores n1 y n2 retorna: %d\n", xorBitwise);

    int notBitwise = ~n1;
    int notBitwise2 = ~n2;

    printf("El operador ~ (bitwise) con los valores n1 y n2 retorna en el primer caso: %d y en el segundo caso: %d\n", notBitwise, notBitwise2);

    int leftShiftBitwise = n1 << 1;
    int leftShiftBitwise2 = n2 << 1;

    int rightShiftBitwise = n1 >> 1;
    int rightShiftBitwise2 = n2 >> 1;

    printf("El operador << (bitwise) con los valores n1 y n2 retorna en el primer caso: %d y en el segundo caso: %d\n", leftShiftBitwise, leftShiftBitwise2);
    printf("El operador >> (bitwise) con los valores n1 y n2 retorna en el primer caso: %d y en el segundo caso: %d\n", rightShiftBitwise, rightShiftBitwise2);
}