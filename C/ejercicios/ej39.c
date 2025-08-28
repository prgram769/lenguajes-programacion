/*2. Escriba un programa en C que muestre en pantalla los números enteros del 1 al 100 de
2 en 2.*/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; i += 2)
    {
        printf("Este es el numero %d \n", i);
    }
    
}