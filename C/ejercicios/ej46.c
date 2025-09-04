/*9. Escriba un programa en C que solicite 10 números enteros positivos al usuario y
calcule y muestre los siguientes valores:
• La suma de todos los números leídos.
• La media de los números.
• El mayor número introducido.
• El menor número introducido.*/

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

    printf("Introduzca 10 numeros enteros positivos: \n\n");

    if (scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10) == 10)
    {
        int sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
        float medium = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
        int arrayNums[10] = {n1, n2, n3, n4, n5, n6, n7, n8, n9, n10};
        int nHigher = n1;
        int nLower = n1;

        printf("\nLa suma es: %d\n\n", sum);
        printf("La media es: %.2f\n\n", medium);

        for (int i = 0; i < 10; i++)
        {
            if (arrayNums[i] > nHigher)
            {
                nHigher = arrayNums[i];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (arrayNums[i] < nLower)
            {
                nLower = arrayNums[i];
            }
        }

        printf("El numero mayor es %d", nHigher);
        printf("\nEl numero menor es %d", nLower);

    } else {
        printf("\nIntroduce valores validos.");
    }
    
}