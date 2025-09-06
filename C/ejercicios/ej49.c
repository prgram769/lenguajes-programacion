/*12. Modificar el ejercicio anterior para que el número máximo de intentos sea 5. Al
terminar el programa indicará si el usuario ha ganado (si ha adivinado el número en
menos de cinco intentos) o no.*/

#include <stdio.h>

int main(void) {
    int const num = 69;
    int counter = 0;
    int n;

    while (n != 69)
    {
        printf("Ingresa un numero entero entre el 1 y el 100.\n\n");

        if (scanf("%d", &n) == 1)
        {
            if (n > num)
            {
                printf("\nEl numero introducido es mayor que el numero secreto.\n\n");

                counter++;
            } else if (n < num)
            {
                printf("\nEl numero introducido es menor que el numero secreto.\n\n");

                counter++;
            } else {
                if (counter > 5)
                {
                    printf("\nHas perdido.");
                } else {
                    printf("\nHas ganado.");
                }
            }
        } else {
            printf("\nDebes ingresar valores validos.");
        }
    }
}