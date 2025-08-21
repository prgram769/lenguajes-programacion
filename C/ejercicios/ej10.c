/*10. Escriba un programa en el que se declaren dos variables, a y b, se pida un valor para
cada una de ellas, y se intercambien dichos valores.*/

#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    int d;

    printf("Dame dos valores respectivamente, uno para a y otro para b: \n\n");

    scanf("%d", &a);
    scanf("%d", &b);

    c = a;
    d = b;

    printf("\nAhora mismo el valor de a es %d y el valor de b es %d", a, b);
    
    b = c;
    a = d;

    printf("\nAhora despues del cambio, a vale %d y b vale %d", a, b);
}