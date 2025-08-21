/*7. Escriba un programa que calcule el resto de la división de dos números enteros. Para
ello utilice el operador módulo (%).*/

#include <stdio.h>

int main(void) {
    int n1;
    int n2;

    printf("Vamos a calcular el resto de una division de dos numeros enteros, para ello necesito que me des dos numeros: \n\n");

    scanf("%d", &n1);
    scanf("%d", &n2);

    int rest = n1 % n2;

    printf("\nEl resto de la division de %d y %d resulta: %d", n1, n2, rest);
}