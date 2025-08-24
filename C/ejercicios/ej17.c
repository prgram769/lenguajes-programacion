/*5. Escriba un programa en C que muestre por pantalla el valor de una entrada de cine en
función de los años de la persona. Así, el precio es de 7 Euros, pero si el usuario tiene
menos de 5 años se aplica un 60% de descuento, y si es mayor de 60 años, se aplicará
un descuento del 55 %. El precio de la entrada se debe declarar como una constante.*/

#include <stdio.h>

int main(void) {
    
    const int PRICE = 7;
    int age;

    printf("Ingresa la edad del cliente: \n\n");

    scanf("%d", &age);

    if (age >= 60)
    {
        float discountPrice = PRICE * 0.55;
        float finalPrice = PRICE - discountPrice;

        printf("\nEl valor de la entrada para el cliente en cuestion es de: %.2f€", finalPrice);
    } else if (age <= 5)
    {
        float discountPrice = PRICE * 0.60;
        float finalPrice = PRICE - discountPrice;    

        printf("\nEl valor de la entrada para el cliente en cuestion es de: %.2f€",finalPrice);
    } else {
        printf("\nEl valor de la entrada para el cliente en cuestion es de: %d€", PRICE);
    }
}