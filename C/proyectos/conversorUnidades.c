/*Objetivo: Crear un conversor de unidades que transforme entre Celsius/Fahrenheit, kilómetros/millas y kilogramos/libras.
Requisitos:

    Menú interactivo: el usuario debe elegir el tipo de conversión (temperatura, distancia, peso).

    Entrada de valores: permitir ingresar el valor a convertir (ej: 100 °C).

    Fórmulas precisas: usar ecuaciones estándar (ej: °F = (°C × 9/5) + 32).

    Resultados claros: mostrar el valor original y el convertido (ej: 100°C = 212°F).

    Validación: evitar entradas no numéricas.*/

#include <stdio.h>

float temp() {

    int option;

    printf("\n--Temperatura--\n\n");
    printf("1. Convertir de Celsius a Fahrenheit.\n 2. Convertir de Fahrenheit a Celsius.\n 3. Salir.\n\n");

    scanf("%d", &option);

    if (option == 1)
    {
        float degrees;

        printf("\nInserta la cantidad de grados Celsius que quieres cambiar a grados Fahrenheit: \n\n");

        scanf("%f", &degrees);

        float convertion = degrees * 9 / 5 + 32;

        printf("\nTu cantidad inicial: %.2f ºC en Fahrenheit es de: %.2f ºF", degrees, convertion);
    } else if (option == 2)
    {
        float degrees;

        printf("\nInserta la cantidad de grados Fahrenheit que quieres convertir a grados Celsius: \n\n");

        scanf("%f", &degrees);

        float convertion = (degrees - 32) * 5 / 9;
        
        printf("\nTu cantidad inicial: %.2f ºF en Celsius es de: %.2f ºC", degrees, convertion);
    } else if (option == 3)
    {
        return 0;
    } else {
        printf("Debes seleccionar una opcion valida.");
    }  
}

float dist() {

    int option;

    printf("\n--Distancia--\n\n");
    printf("1. Convertir kilometros a millas.\n 2. Convertir millas a kilometros.\n 3. Salir.\n\n");

    scanf("%d", &option);

    if (option == 1)
    {
        float kilometers;

        printf("\nIngresa la cantidad de kilometros que quieres convertir a millas: \n\n");
        
        scanf("%f", &kilometers);

        float convertion = kilometers * 0.621371;

        printf("\nTu cantidad inicial: %.2f Km en millas es: %.2f M.", kilometers, convertion);
    } else if (option == 2)
    {
        float miles;

        printf("\nIngresa la cantidad de millas que quieres convertir a kilometros: \n\n");

        scanf("%f", &miles);

        float convertion = miles * 1.60934;

        printf("\nTu cantidad inicial: %.2f M en kilometros es: %.2f Km.", miles, convertion);
    } else if (option == 3)
    {
        return 0;
    } else {
        printf("Ingresa una opcion valida.");
    }
}

float weight() {
    int option;

    printf("\n--Peso--\n\n");
    printf("1. Convertir kilogramos a libras.\n 2. Convertir libras a kilogramos.\n 3. Salir\n\n");

    scanf("%d", &option);

    if (option == 1)
    {
        float kilograms;

        printf("\nIngresa la cantidad de kilogramos que quieres convertir a libras: \n\n");

        scanf("%f", &kilograms);

        float convertion = kilograms * 2.20462;

        printf("\nTu cantidad inicial: %.2f Kg en libras es: %.2f L.", kilograms, convertion);
    } else if (option == 2)
    {
        float pounds;

        printf("\nIngresa la cantidad de libras que quieres convertir a kilogramos: \n\n");

        scanf("%f", &pounds);

        float convertion = pounds * 0.453592;

        printf("\nTu cantidad inicial: %.2f L en kilogramos es: %.2f Kg.", pounds, convertion);
    } else if (option == 3)
    {
        return 0;
    } else {
        printf("Ingresa una opcion valida.");
    }
}

int main(void) {

    int option;

    printf("--Convertidor de unidades--\n\n");
    printf("1. Temperatura.\n 2. Distancia.\n 3. Peso.\n 4. Salir.\n\n");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        temp();
        break;
    case 2:
        dist();
        break;
    case 3:
        weight();
        break;
    case 4:
        return 0;
        break;
    default:
        printf("Debes seleccionar una de las opciones permitidas.");
        break;
    }
}