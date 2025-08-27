/*5. Encuentre los errores del siguiente programa
int main(void)
{
    foat radio, perimetro;
    printf ( introduzca el radio");
    scanf("%f", &radio);
    perimetro= 2*PI*radio
    printf("%f", perimetro);
    return(0) 
}*/

/*El problema esta en que en el programa no se declara PI*/

#include <stdio.h>

int main(void) {
    float radius, perimeter;

    printf("Introduce el radio de la circunferencia: \n\n");

    if (scanf("%f", &radius) == 1)
    {
        const float PI = 3.1416;
        
        perimeter = 2 * PI * radius;

        printf("\nEl perimetro es: %.2f", perimeter);
    }
    
}