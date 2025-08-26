/*15. Escribir un programa que reciba un número de una carta de una baraja española e
imprima por pantalla: “As” si es un 1, “Sota”, si es un 10, “Caballo” si es un 11 y “Rey”
si es un 12. Para números de cartas entre 2 y 9 (incluidos) debe imprimir: "No es as ni
figura". Para otros números debe imprimir: "este no es un número de una carta de la
baraja española".*/

#include <stdio.h>

int main(void) {
    int numCard;

    printf("Ingresa un numero de carta de la baraja española. \n\n");

    if (scanf("%d", &numCard) == 1)
    {
        if (numCard == 1)
        {
            printf("\nLa carta es un AS.");
        } else if (numCard == 10)
        {
            printf("\nLa carta es un Sota.");
        } else if (numCard == 11)
        {
            printf("\nLa carta es un Caballo");
        } else if (numCard == 12)
        {
            printf("\nLa carta es un Rey");
        } else if (numCard >= 2 && numCard <= 9)
        {
            printf("\nLa carta no es ni una figura ni un AS.");
        } else {
            printf("\nIngresa un numero valido, este numero no existe en la baraja española.");
        }
        
    } else {
        printf("\nIngresa un valor valido.");
    }
}