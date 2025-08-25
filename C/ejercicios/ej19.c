/*7. Escriba un programa que solicite al usuario tres números enteros de una cifra y muestre
el mensaje "acceso permitido" si los números introducidos son “1”, “2” y “3”*/

#include <stdio.h>

int main(void) {
    int n1,n2,n3;

    printf("Introduce tres numeros enteros de una cifra: \n\n");

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= 0 && n1 <= 9)
    {
        if (n2 >= 0 && n2 <= 9)
        {
            if (n3 >= 0 && n3 <= 9)
            {
                if (n1 == 1 && n2 == 2 && n3 == 3)
                {
                    printf("\nAcceso permitido.");
                } else {
                    printf("\nAcceso denegado.");
                }
                
            } else {
                printf("\nEl tercer numero no es un valor correcto.");
            }
            
        } else {
            printf("\nEl segundo numero no es un valor correcto.");
        }
        
    } else {
        printf("\nEl primer numero no es correcto.");
    }
    
}