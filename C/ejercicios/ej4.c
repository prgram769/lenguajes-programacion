/*-4. Escriba un programa que calcule el área de un triángulo rectángulo, pidiendo al
usuario la altura y la base. La salida por pantalla debe ser "Un triangulo rectángulo de
altura ____ y base ____, tiene un área de ____" (sustituyendo los espacios en blanco
por los valores)
NOTA area = (base * altura)/2*/

#include <stdio.h>

int main(void) {
    float fundation;
    float high;

    printf("Vamos a proceder a calcular el area de un triangulo rectangulo, para ello me tienes que proporcionar en este orden: la base y la altura en cm\n\n");

    scanf("%g", &fundation);
    scanf("%g", &high);

    float area = fundation * high / 2;

    printf("\nUn triangulo rectangulo de base %g y altura %g, tiene un area de %g cm", fundation, high, area);
}