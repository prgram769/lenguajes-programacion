/*5. Escriba un programa en C que genere la siguiente serie: 5,10,15,20,25,30… El
programa preguntará primero cuantos términos se quieren mostrar y después mostrará
la serie correspondiente.*/

#include <stdio.h>

int main(void) {
    int n, i = 1;

    printf("Serie: 5,10,15,20,25,30...\n¿Cuantos numeros quieres mostrar de esta misma serie? \n\n");

    if (scanf("%d", &n) == 1)
    {
        int serie = n;

        while (i <= n)
        {
            serie += 5;

            printf("\nEste numero es de la serie: %d\n", serie);

            i++;
        }
        
    } else {
        printf("\nIntroduce valores validos.");
    }
    
}