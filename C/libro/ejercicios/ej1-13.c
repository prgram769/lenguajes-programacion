/*Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. Es facil dibujar el 
el histograma con las barras horizontales pero es un desafio con las verticales*/

#include <stdio.h>

int main(void) {
    int wordsArray[20]; /*Primero creamos las variables*/
    int counter, characterBefore, option;
    int i = 0;
    
    while ((counter = getchar()) != NULL)
    {   /*Voy a usar el getchar para ir obteniendo caracteres mientras que counter sea distinto de NULL, como eso es asi, pillará caracteres siempre,
        dentro hare comprobaciones para saber cuando hay una nueva palabra y tambien a cada palabra que salga el programa preguntara si quiere seguir*/
        if (counter != ' ' || counter != '\t' || counter != '\n')
        {
            characterBefore = 'l'; /*asignamos 'l' a characterBefore para decir que antes del espacio \t o \n habia una letra y poder meter la palabra en el array*/
        }

        if (characterBefore == 'l') /*Comprobamos que characterBefore es 'l' y si lo es añadimos al array la palabra que esta almacenada en counter*/
        {
            wordsArray[i] = counter;

            i++;
        }

        /*codigo generar histograma*/
        if (i > 0)
        {
            for (int l = 0; l < sizeof(i); l++)
            {
                
            }
        }

        if (i == i + 1) /*verificamos que i sea igual a i + 1 y en caso de que asi sea preguntaremos si quiere seguir o no*/
        {
            printf("\n¿Quieres seguir?\n1.Si. 2.No.");

            if (scanf("%d", &option) == 1)
            {
                if (option == 2)
                {
                    

                    return 0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
        }
        
        
    }
    
}