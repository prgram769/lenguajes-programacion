/*Verifique que la expresion getchar() != EOF es 0 o 1*/

#include <stdio.h>

int main(void) {
    int c = getchar();

    if (c != EOF)
    {
        printf("1");
    } else {
        printf("0");
    }
    
}