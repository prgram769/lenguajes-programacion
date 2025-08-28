/*6. Escriba un programa que pida al usuario un número, y muestre el mensaje "has
introducido el numero ---" (mostrando el número que ha sido introducido). Esta acción
debe repetirse hasta que el usuario introduzca el número 0. En ese momento se
mostrará el mensaje "Finalizando: Se ha introducido el número 0". Además, se debe
mostrar cuántos números se han introducido y su suma.*/

#include <stdio.h>

int main(void) {
    int n1;
    int contador;

    printf("Introduce un numero entero \n\n");

    if (scanf("%d", &n1) == 1)
    {
        while (n1 != 0)
        {
            printf("\nHas introducido el numero: %d\n", n1);
            printf("\nIntroduce otro numero: \n\n");
            
            if (scanf("%d", &n1) == 1)
            {
                if (n1 == 0)
                {
                    printf("\nFinalizado: Se ha introducido el numero 0.");
                }
                
            } else {
                printf("\nDebes introducir valores validos.");
            }
            
            contador++;
        }
        
    } else {
        printf("\nDebes introducir valores validos.");
    }
    
}