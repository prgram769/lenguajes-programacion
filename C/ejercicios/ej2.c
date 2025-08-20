/*-2. Escriba un programa en el que se declaren tres variables, a, b y c y se asigne a esas
variables los valores 5, 7 y 9 respectivamente. El programa deberá entonces calcular
su suma y mostrar el resultado. Modifíquelo para que los valores de las variables sean
introducidos por el usuario.*/

#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;

    printf("Tu trabajo como usuario es darme el valor de 3 variables: a, b y c así que me los darás en este orden.\n\n");
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int sum = a + b + c;

    printf("\nLa suma de estas 3 variables introducidas por el usuario es: %d", sum);
}