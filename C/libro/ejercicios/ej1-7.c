/*Escribe un programa que imprima el valor de EOF*/

#include <stdio.h>

int main(void) {
    int c = getchar();

    if (c != EOF)
    {
        printf("1\n\n");
    } else {
        printf("0\n\n");
    }

    printf("%d", EOF);
    
}