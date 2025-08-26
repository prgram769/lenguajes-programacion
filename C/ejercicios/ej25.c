/*14. Escriba un programa en C que calcule el salario semanal de un trabajador, a partir de
las horas trabajadas y el precio cobrado por hora. Ambos valores deben ser solicitados
al usuario. La jornada normal es de 40 horas semanales. Las horas extra se pagan un
cincuenta por ciento más caras que las normales, y pasan a pagarse al doble que las
normales a partir de las 50 horas trabajadas.
*/

#include <stdio.h>

int main(void) {
    int wh;
    float weeklyPay;
    float priceHour;
    float payPlus = 0;
    float payPlusPlus = 0;

    printf("Ingresa la cantidad de horas trabajadas. \nIngresa a cuanto pagan las horas.\n\n");

    if (scanf("%d %f", &wh, &priceHour) == 2)
    {
        float defaultPay = (wh > 40 ? 40: wh) * priceHour;

        if (wh > 40)
        {
            if (wh > 50)
            {
                payPlus = 10 * priceHour * 1.50;
            } else {
                payPlus = (wh - 40) * priceHour * 1.50;
            }
        }
        if (wh > 50)
        {
            defaultPay = 40 * priceHour;
            payPlusPlus = (wh - 50) * priceHour * 2;          
        }

        weeklyPay = defaultPay + payPlus + payPlusPlus;
        
        printf("\nTu salario esta semana es de %.2f €", weeklyPay);
        
    } else {
        printf("\nIngresa valores validos.");
    }
    
}