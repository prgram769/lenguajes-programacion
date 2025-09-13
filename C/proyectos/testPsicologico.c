/*Juego de test psicologico de empatia que te dice una personalidad aproximada*/

#include <stdio.h>

int sumSent(int sum) {
    if (sum > 4)
    {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int option = 1;
    int answer;
    int sum;

    printf("======================\n||·TEST PSICOLOGICO·||\n======================\n\n");
    printf("¿Quieres empezar ya con el test?\n1.Si. 2.No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nPrimera pregunta, poniendo la situacion de que tuvieras que salvar a una persona que te cae muy mal o dejarla morir, ¿Que harias?\n1. Salvarla. 2. Dejarla morir.\n\n");
            
            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
            } else {
                printf("\nDebes introducir valores contemplados.");
            }
            
            printf("\nSiguiente pregunta, si tuvieras la opcion de consolar e intentar ayudar a alguien sabiendo que es muy posible que te ocupe el dia entero, ¿Lo harias?\n1. Si. 2. No.\n\n");
            
            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;   
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }

            printf("\nSiguiente pregunta, ¿Te tomarias la molestia de intentar hacer todo lo que esté en tu mano para poder hacer que alguien que está a tu alrededor se sienta mejor?\n1. Si. 2. No.\n\n");
            
            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
            printf("\nSiguiente pregunta, ¿Sientes alegria, tristeza, preocupacion, etc cuando una persona cercana te cuenta algo que le ha pasado?\n1. Si. 2. No.\n\n");

            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }

            printf("\nSiguiente pregunta, ¿Sueles preocuparte cuando una persona cercana está pasando por un mal momento o le ha ocurrido algo malo?\n1. Si. 2. No.\n\n");

            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
        
            printf("\nSiguiente pregunta, ¿Te sientes culpable si haces/dices algo negativo que afecta a otra persona?\n1. Si. 2. No.\n\n");

            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
            printf("\nSiguiente pregunta, ¿Cuando alguien te cuenta un problema, tiendes a pensar y buscar soluciones y cuando las tienes, compartes tus ideas?\n1. Si. 2. No.\n\n");
          
            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
            printf("\nSiguiente y ultima pregunta, ¿Haces el esfuerzo de ayudar a otros aunque eso pueda suponer algun inconveniente o te pueda perjudicar?\n1. Si. 2. No.\n\n");
        
            if (scanf("%d", &answer) == 1)
            {
                if (answer == 1)
                {
                    sum++;
                } else if (answer == 2)
                {
                    sum+0;
                } else {
                    printf("\nDebes introducir valores contemplados.");
                }
            
            } else {
                printf("\nDebes introducir valores validos.");
            }

            if (sumSent(sum) == 1)
            {
                char string[50] = {"Eres una persona empatica"};

                printf("\n\nHas tenido una puntuacion de: %d, por lo tanto tu resultado es: %s.", sum, string);
            } else {
                char string[50] = {"No eres una persona empatica"};

                printf("\n\nHas tenido una puntuacion de: %d, por lo tanto tu resultado es: %s, se requieren mas de 4 puntos para considerarse una persona empatica.", sum, string);
            }
            
        } else if (option == 2)
        {
            printf("\nSaliendo...");
            
            return 0;
        } else {
            printf("\nDebes introducir valores contemplados.");
        }
        
    } else {
        printf("\nDebes ingresar valores validos.");
    }
    
}