/*16. Escribir un programa que tras solicitar al usuario las coordenadas (x, y) de dos puntos
calcule la pendiente de la recta que pasa por ambos puntos. La pendiente de dicha recta
se calcula como:
    y2 - y1
m = -------
    x2 - x1
Validar el funcionamiento del programa cuando los puntos introducidos son: A(2,1) y
B(2,5).*/

#include <stdio.h>

int main(void) {
    float x1, x2;
    float y1, y2;

    printf("Ingresa las coordenadas del primer punto.\n");
    printf("Ingresa las coordenadas del segundo punto.\n");
    printf("Debes ingresar los datos en este orden: x1, y1, x2, y2\n\n");

    if (scanf("%f %f %f %f", &x1, &y1, &x2, &y2) == 4)
    {
        float m = (y2 - y1) / (x2 - x1);

        printf("\nLas coordenadas del punto A son (%.2f, %.2f) y las coordenadas del punto B son (%.2f, %.2f).\n\n", x1, y1, x2, y2);
        printf("La pendiente de esos dos puntos es: %.2f", m);
    } else {
        printf("\nIntroduce valores validos porfavor.");
    }
    
}