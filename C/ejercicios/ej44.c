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

int counter = 0;
const int TRIES = 3;

int main(void) {
    char user[5];
    char password[5];

    printf("--Sistema de acceso--\n\n");
    printf("Introduce tu usuario: \n\n");
    
    scanf("%s", user);

    if (strcmp(user, "root") == 0)
    {
        counter = 0;

        printf("\nAhora introduce tu contraseña numerica.\n\n");

        if (strcmp(password, "1234") == 0)
            {
                printf("\nBienvenido al sistema usuario root");
            } else {
                
                int tries = 3;

                do
                {
                    counter++;

                    printf("\nError: contraseña incorrecta, te quedan %d intentos.\n\n", TRIES - counter);

                    tries--;

                    if (strcmp(password, "1234") == 0)
                    {
                        printf("\nBienvenido al sistema usuario root.");
                    }

                    if (tries == 0)
                    {
                        printf("Error: Te has quedado sin intentos, vuelve a ejecutar y prueba de nuevo.");
                        return 0;
                    }
                    
                    scanf("%s", password);
                    
                } while (strcmp(password, "1234") != 0);                
            }

    } else {

        int tries = 3;

        do
        {
            counter++;
        
            printf("\nError, usuario incorrecto, te quedan %d intentos.\n\n", TRIES - counter);

            tries--;
            
            if (tries == 0)
            {
                printf("\nError: Te has quedado sin intentos, vuelve a ejecutar para probar de nuevo.");
                return 0;
            }

            scanf("%s", user);

        } while (strcmp(user, "root") != 0);

        if (strcmp(user, "root") == 0)
        {
            counter = 0;

            printf("\nAhora introduce tu contraseña numerica.\n\n");

            scanf("%s", password);

            if (strcmp(password, "1234") == 0)
            {
                printf("\nBienvenido al sistema usuario root");
            } else {
                
                int tries = 3;

                do
                {
                    counter++;

                    printf("\nError: contraseña incorrecta, te quedan %d intentos.\n\n", TRIES - counter);

                    tries--;

                    if (strcmp(password, "1234") == 0)
                    {
                        printf("\nBienvenido al sistema usuario root");
                    }

                    if (tries == 0)
                    {
                        printf("Error: Te has quedado sin intentos, vuelve a ejecutar y prueba de nuevo.");
                        return 0;
                    }

                    scanf("%s", password);
                    
                } while (strcmp(password, "1234") != 0);
                
            }
            
        }
        
    }
    
}