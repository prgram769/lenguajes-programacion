/*7. Escriba un programa en C que lea dos enteros en las variables x e y, y calcule y
muestre por pantalla los valores de x/y (como número decimal ) y de x%y
Ejecute el programa introduciendo valores diferentes. ¿Qué sucede cuando a la
variable y se le asigna el valor 0?
*/

#include <stdio.h>

int main(void) {
    int x, y;

    printf("Introduce 2 numeros enteros para asignarlos a las variables x e y respectivamente: \n\n");

    if (scanf("%d %d", &x, &y) == 2)
    {

        if (y == 0)
        {
            printf("\nNo es posible dividir entre 0");
        } else {
            float division = (float)x / (float)y;
            float module = x % y;

            printf("La division de x e y da %.3f y el resto %.3f", division, module);
        }
        
    } else {
        printf("\nIntroduce valores validos.");
    }
    
}