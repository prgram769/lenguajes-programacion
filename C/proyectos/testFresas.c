/*Test de las fresas*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int option;
    float answer1;
    int answer2;
    char answer3[50];
    char answer4[50];
    char answer5[50];
    int c;

    printf("========================\n||·TEST DE LAS FRESAS·||\n========================\n\n");
    printf("¿Quieres empezar ya el test?\n1. Si. 2. No.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nEstás paseando por el campo y ves un huerto donde crecen unas fresas grandes y jugosas.\n");
            printf("Tu estómago ruge,tu boca se hace agua y no hay nadie cerca.\n");
            printf("Solamente hay una barrera entre tú y ese festín.");
            printf("\n\n¿Qué altura tiene la valla que rodea el huerto, ingresa el valor en cm?\n\n");

            if (scanf("%f", &answer1) == 1)
            {
                printf("\nAhora entras donde está la fruta.\n\n");
                printf("¿cuántas fresas comes?\n\n");

                if (scanf("%d", &answer2) == 1)
                {
                    printf("\nDe pronto, aparece el dueño de la fruta y se pone a reñirte.\n\n");
                    printf("¿Qué le dices?\n\n");
                    
                    while ((c = getchar()) != '\n' && c != EOF) {

                    }

                    if (fgets(answer3, sizeof(answer3), stdin) != NULL)
                    {
                        answer3[strcspn(answer3, "\n")] = 0;

                        printf("\nUna vez cometida la falta y haber dado tu opinión, solo queda valorar las fresas.\n\n");
                        printf("¿Como era su sabor?\n\n");

                        if (fgets(answer4, sizeof(answer4), stdin) != NULL)
                        {
                            answer4[strcspn(answer4, "\n")] = 0;

                            printf("\nCuándo más tarde recuerdas lo que has hecho.\n\n");
                            printf("¿Cómo te sientes al darte cuenta de que has robado algo que no te pertenecía?\n\n");

                            if (fgets(answer5, sizeof(answer5), stdin) != NULL)
                            {
                                answer5[strcspn(answer5, "\n")] = 0;

                                FILE *solutions;

                                printf("\nSoluciones en un archivo txt en el mismo directorio donde has ejecutado, si has ejecutado esto en descargas, saldra en descargas.");
                                
                                solutions = fopen("soluciones.txt", "w");
                                fprintf(solutions, "Las fresas son un símbolo de atracción sexual y deseo.\nLa forma en que se ha desarrollado la escena indica cuál es tu actitud frente a las relaciones.\n1.La altura de la barrera que rodea al campo mide el grado de control que tienes sobre ti mismo y la resistencia que opones a la tentación sexual.\nTu resultado ingresado ha sido %.2f, si es menor a 1m significa que tienes poca resistencia si tienes de 1m a 3m significa que tienes una resistencia normal, si tienes mas de 3m significa que tienes una resistencia muy alta.\n", answer1);
                                fprintf(solutions, "2.El número de fresas que te has comido indica la cantidad de personas que puedes amar o desear al mismo tiempo.\nHas ingresado: %d fresas, eso significa que serias capaz de amar a %d personas.\n", answer2, answer2);
                                fprintf(solutions, "3.Las explicaciones que le has dado al dueño del huerto revelan como te defenderías si te descubriesen en una infidelidad.\nTu has ingresado: %s, eso es mas o menos como te defenderias en una infidelidad.\n", answer3);
                                fprintf(solutions, "4.Tu recuerdo de la situación y del sabor de las fresas da una idea de cómo serían tus sentimientos si rememorases tu aventura.\n.Tu has introducido, %s, asi es mas o menos una idea de como rememorarias una infidelidad de tu parte.\n", answer4);
                                fprintf(solutions, "5.Al reflexionar sobre las fresas, has introducido que te sentias asi: %s, eso seria una idea de como te sentirias al recordar la aventura", answer5);
                                fclose(solutions);
                            }
                            
                        }
                        
                    }
                    
                } else {
                    printf("\nDebes introducir valores validos.");
                }
                
            } else {
                printf("\nDebes ingresar valores validos.");
            }
            
        } else if (option == 2)
        {
            printf("\nSaliendo...");

            return 0;
        } else {
            printf("\nDebes introducir valores contemplados.");
        }
        
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}