/*4. Escriba un programa que muestre en pantalla todos los múltiplos de 3 entre los
números 1 y 100.*/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("Este numero es multiplo de 3: %d \n", i);
        }
        
    }
    
}