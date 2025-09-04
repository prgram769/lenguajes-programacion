/*Objetivo: Generar contraseñas seguras de longitud variable.
Requisitos:

    Permitir al usuario elegir la longitud.

    Incluir letras mayúsculas, minúsculas, números y símbolos.

    Generar una contraseña aleatoria mostrándola en pantalla.

    Opción para generar múltiples contraseñas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generator(void) {
    srand(time(NULL));

    char charArrayPaswd[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z','0','1','2','3','4','5','6','7','8','9','!','@','#','$','^','&','*','?'};
    int lenght;

    printf("\n--Generador de contraseñas fortificadas de manera aleatoria--\n\n");
    printf("Introduce la longitud que quieres para la contraseña:\n\n");

    if (scanf("%d", &lenght) == 1)
    {
        char randomChain[lenght + 1];
        for (int i = 0; i < lenght; i++)
        {
            int randInd = rand() % (sizeof(charArrayPaswd) - 1);

            randomChain[i] = charArrayPaswd[randInd];
        }
        
        randomChain[lenght] = '\0';

        printf("\nLa contraseña es: %s\n", randomChain);
    } else {
        printf("\nDebes introducir valores validos.");
    }
}

int main(void) {
    
    int option;

    generator();
    
    printf("\n¿Deseas otra contraseña?\n1. Si. 2. No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        while (option == 1)
        {
            generator();

            printf("\n¿Deseas otra contraseña?\n1. Si. 2. No.\n\n");
            
            if (scanf("%d", &option) == 1)
            {
                if (option != 1)
                {
                    printf("\nSaliendo...");

                    return 0;
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
        }
            
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}