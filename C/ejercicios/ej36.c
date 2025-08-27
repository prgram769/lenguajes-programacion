/*9. Escriba un programa que declare una variable de tipo entero x y una variable y de tipo
real, asigne a dichas variables los valores 6 y 2.0, respectivamente, y calcule y muestre
por pantalla el resultado de las siguientes operaciones:
a) x*y
b) x/y
c) x%y
¿Qué sucede al intentar compilar el programa? ¿Cómo resolvería este problema?*/
/*la operacion c daria problemas ya que para hacer el modulo ambos numeros tienen que ser enteros(int), para solucionarlo simplemente cambio el float a int*/

#include <stdio.h>

int main(void) {
    int x = 6;
    float y = 2.0;
    float a = x * y;
    float b = x / y;
    int c = x % (int)y;

    printf("--Calculos--\n\n");
    printf("El calculo a da este resultado: %.2f\n", a);
    printf("El calculo b da este resultado: %.2f\n", b);
    printf("El calculo c da este resultado: %d", c);
}