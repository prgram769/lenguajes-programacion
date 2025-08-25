/*14. Escriba un programa en C que calcule el salario semanal de un trabajador, a partir de
las horas trabajadas y el precio cobrado por hora. Ambos valores deben ser solicitados
al usuario. La jornada normal es de 40 horas semanales. Las horas extra se pagan un
cincuenta por ciento más caras que las normales, y pasan a pagarse al doble que las
normales a partir de las 50 horas trabajadas.
*/

#include <stdio.h>

int main(void) {
    int wh;
    int weeklyPay;
    float priceHour;

    printf("Ingresa la cantidad de horas trabajadas. \nIngresa a cuanto pagan las horas.\n\n");

    if (scanf("%d %f", &wh, &priceHour) == 2)
    {
        if (wh <= 40)
        {
            weeklyPay = wh * priceHour;
        }
        
    } else {
        printf("\nIngresa valores validos.");
    }
    
}