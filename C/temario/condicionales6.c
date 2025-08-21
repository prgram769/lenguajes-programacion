#include <stdio.h>

int main(void) {
    int a = 3;

    switch (a)
    {
    case 0:
        printf("Este es el caso 0");
        break;
    case 1:
        printf("Este es el caso 1");
        break;
    default:
        printf("Este es el caso %d", a);
        break;
    }
}