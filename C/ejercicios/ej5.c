/*-5. Escriba un programa que calcule el perímetro de una circunferencia.
NOTA perimetro = 2 * PI * r). Se recomienda definir PI como una constante
usando la directiva define.*/

#include <stdio.h>

int main(void) {
    #define PI 3.1416
    float r;

    printf("Vamos a calcular el perimetro de una circunferencia, para ello debes darme la medida del radio en cm: \n\n");

    scanf("%g", &r);

    float perimeter = 2 * PI * r;

    printf("\nEl perimetro tiene una medida de %g cm", perimeter);
}