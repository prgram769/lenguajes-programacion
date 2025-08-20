/*-3. Escriba un programa que calcule el interés que se obtiene por un determinado dinero
depositado en un banco. Para ello el programa preguntará por el capital inicial y por el
tipo de interés.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    int money;
    char interestRate[20];
    double interest = 0.05;

    printf("Ingresa el capital inicial deseado en el banco porfavor, también ingrese el tipo de interés, las palabras reservadas para los tipos de interes son simple y compuesto.\n\n");

    scanf("%d", &money);
    scanf("%s", interestRate);

    if (strcmp(interestRate, "simple") == 0)
    {
        double calc = money * interest;

        printf("\nEl interes simple segun tu capital inicial que es: %d y la tasa de interes, que en nuestro banco es: %f, tendrias que pagar: %f €", money, interest, calc);
    }
    else if (strcmp(interestRate, "compuesto") == 0)
    {
        int years;

        printf("En ese caso dime el nº de años que quieres mantener esta inversion: \n");

        scanf("%d", &years);

        double calc = money * pow(1 + interest, years);

        printf("Cuando termines tu inversion, habras ganado: %f €", calc);
    }
    
    
}