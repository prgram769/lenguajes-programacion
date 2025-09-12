/*Juego de test psicologico que te dice una personalidad aproximada*/

#include <stdio.h>

int main(void) {
    int option = 1;
    int answer;

    printf("======================\n||·TEST PSICOLOGICO·||\n======================\n\n");
    printf("¿Quieres empezar ya con el test?\n1.Si. 2.No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nPrimera pregunta, poniendo la situacion de que tuvieras que salvar a una persona que te cae muy mal o dejarla morir, ¿Que harias?\n1. Salvarla. 2. Dejarla morir.\n\n");
            
            if (scanf("%d", &answer) == 1)
            {
                if ()
                {
                    /* code */
                }
                
            } else {
                printf("\nDebes introducir valores contemplados.");
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