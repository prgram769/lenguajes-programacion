#include <stdio.h>

int main(void) {
    int a = 2;
    int b;

    b = a++;

    printf("El valor de b ahora es: %d\n",b);
    printf("El valor de a ahora es: %d\n",a);

    b = ++a;

    printf("El valor de b ahora es: %d\n",b);
    printf("El valor de a ahora es: %d\n",a);
}