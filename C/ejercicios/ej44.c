/*7. Escriba un programa que pida al usuario su nombre y contraseña y le de tres
oportunidades para introducir los datos correctos, que serán root y 1234. Si los datos
introducidos son correctos se mostrará por pantalla “Bienvenido al sistema”. En caso
contrario se mostrará un mensaje por pantalla indicando que se ha superado el número
de intentos permitido.
Notas:
Puesto que las cadenas de caracteres finalizan con el carácter nulo (‘\0’), usuario y
contraseña se declararán como cadenas de longitud 5 (char usuario[5]). Para leer
cualquiera de estas cadenas con la función scanf se usará el descriptor de formato %s y
dado que el nombre de la cadena ya es una dirección, éste no debe ir precedido del
símbolo &(scanf(“%s”, usuario)).
Para comparar cadenas se debe usar la función strcmp (string compare), por ejemplo
strcmp(usuario, "root"), que devolverá un 0 si las cadenas son iguales y otro valor si
son distintas.*/

#include <stdio.h>
#include <string.h>

typedef enum {
    justready,
    unready
} BOOL;

int main(void) {
    char user[5];
    char password[5];
    const int TRIES = 3;
    int counter = 0;
    int tries = 3;
    BOOL ready = unready;

    printf("--SISTEMA DE ACCESO--\n\n");
    printf("Introduzca su usuario y contraseña: \n\n");

    scanf("%s %s", user, password);
    
    while (ready != justready)
    {
        if (strcmp(user, "root") != 1 && strcmp(password, "1234") != 0)
        {
            counter++;

            tries--;
            
            if (tries == 0)
            {
                printf("\nTe has quedado sin intentos.");
                return 0;
            } else {
                printf("\nDatos invalidos, estos datos son erroneos, te quedan %d intentos.\n\n", TRIES - counter);

                scanf("%s %s", user, password);
            }
        } else {
            printf("\nBienvenido al sistema.");
            return 0;
        }
        
    }
    
}