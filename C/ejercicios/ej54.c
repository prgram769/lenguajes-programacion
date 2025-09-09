/*3. Escriba un programa en C que muestre el siguiente menú:
CALCULO DE AREAS
===========================
1 - Calcular el área de un triángulo = base * altura / 2
2 - Calcular el área de un trapecio = (base mayor + base menor) * altura / 2
3 - Calcular el área de un rectángulo = base * altura
Y lea la opción introducida por el usuario. En función de la opción el programa deberá
pedir los datos necesarios para calcular el área, realizar el cálculo y mostrar el
resultado por pantalla.
Utilice una función para mostrar el menú, y otras tres para calcular el área de los
distintos polígonos (triángulo, trapecio rectángulo). El valor de retorno de cada una de
estas tres últimas funciones debe ser el área calculada.*/

#include <stdio.h>

float calcAreaTriangle(float base, float hight) {
    float result = base * hight / 2;

    return result;
}

float calcAreaTrapeze(float mbase, float hbase, float hight) {
    float result = (hbase + mbase) * hight / 2;

    return result;
}

float calcAreaRectangle(float base, float hight) {
    float result = base * hight;

    return result;
}

int main(void) {
    float base, hight, mbase, hbase;
    int option;

    printf("¿Que quieres calcular?\n1. Area de triangulo. 2. Area de trapecio. 3. Area de rectangulo.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nEn ese caso introduce su base y su altura respectivamente en cm:\n\n");
            
            if (scanf("%f %f", &base, &hight) == 2)
            {
                printf("\nEl area del triangulo cuya base es %.2fcm y cuya altura es %.2fcm es %.2fcm2", base, hight, calcAreaTriangle(base, hight));
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
        } else if (option == 2)
        {
            printf("\nEn ese caso debes introducir su base menor, su base mayor y su altura respectivamente en cm:\n\n");

            if (scanf("%f %f %f", &mbase, &hbase, &hight) == 3)
            {
                printf("\nEl area del trapecio cuya base menor es %.2fcm, cuya base mayor es %.2fcm y cuya altura es %.2fcm es %.2fcm2", mbase, hbase, hight, calcAreaTrapeze(mbase, hbase, hight));
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
        } else if (option == 3)
        {
            printf("\nEn ese caso debes introducir su base y su altura respectivamente en cm:\n\n");

            if (scanf("%f %f", &base, &hight) == 2)
            {
                printf("\nEl area del rectangulo cuya base es %.2fcm y cuya altura es %.2fcm es %.2fcm2", base, hight, calcAreaRectangle(base, hight));
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
        } else {
            printf("\nDebes introducir valores contemplados.");
        }
        
    } else {
        printf("\nDebes introducir valores validos.\n");
    }
    
}