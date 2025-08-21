/*6. Dado el siguiente fragmento de código, identifique las declaraciones de variables, las
instrucciones de asignación, los operadores y las expresiones. ¿Cuál será el resultado
de evaluar esas expresiones?
int i1, i2, i3;
float r1, r2, r3;
i1=12;
i2=5;
r1=12.0;
r2 =5;
r3= r1/r2;
r3=i1/i2;
i3=i1/r2;*/

#include <stdio.h>

int main(void) {
    int i1, i2, i3;
    float r1, r2, r3;

    i1 = 12;
    i2 = 5;
    r1 = 12.0;
    r2 = 5;

    r3 = r1 / r2;
    
    printf("En este momento r3 vale: %g \n", r3);

    r3 = i1 / i2;

    printf("Ahora en este momento r3 vale: %g \n", r3);

    i3 = i1 / r2;

    printf("i3 tiene este valor: %d \n", i3);
}