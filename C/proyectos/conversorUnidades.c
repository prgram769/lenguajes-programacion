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

    printf("--Temperatura--\n\n");
    printf("1. Convertir de Celsius a Fahrenheit.\n 2. Convertir de Fahrenheit a Celsius.\n 3. Salir.\n\n");

    scanf("%d", &option);

    if (option == 1)
    {
        float degrees;

        printf("Inserta la cantidad de grados Celsius que quieres cambiar a grados Fahrenheit: \n\n");

        scanf("%g", &degrees);

        float convertion = degrees * 9 / 5 + 32;

        printf("Tu cantidad inicial: %g ºC en Fahrenheit es de: %g ºF", degrees, convertion);
    } else if (option == 2)
    {
        float degrees;

        printf("Inserta la cantidad de grados Fahrenheit que quieres convertir a grados Celsius: \n\n");

        scanf("%g", &degrees);

        float convertion = (degrees - 32) * 5 / 9;
        
        printf("Tu cantidad inicial: %g ºF en Celsius es de: %g ºC", degrees, convertion);
    } else if (option == 3)
    {
        return 0;
    } else {
        printf("Debes seleccionar una opcion valida.");
    }
    
}

float dist() {

}

float weight() {

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

        break;

    case 3:

        break;
    case 4:
        return 0;
        break;
    default:
        printf("Debes seleccionar una de las opciones permitidas.");
        break;
    }
}