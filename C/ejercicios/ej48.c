/*11. Escribir un programa en C para adivinar un número entre 1 y 100 que previamente se
ha definido como una constante. El programa irá pidiendo números al usuario y,
siempre que dicho número no coincida con el número secreto, le indicará si el número
introducido es mayor o menor que el número secreto que tiene que adivinar. Al final, el
programa indicará la cantidad de intentos que se han necesitado para adivinar el
número. Si el número de intentos es menor que 5 se mostrará “Enhorabuena!”. Si es un
valor entre 5 y 10 se mostrará el mensaje “No está mal”. Si el número de intentos es
mayor que 10 se mostrará el mensaje “Debe practicar más”.*/

#include <stdio.h>

int main(void) {
    const int num = 69;
    int n;
    int counter = 0;

    while (n != 69)
    {
        printf("Dime un numero entero entre el 1 y el 100.\n\n");

        if (scanf("%d", &n) == 1)
        {
            if (n > num)
            {
                printf("\nEl numero introducido es mayor que el numero secreto.\n\n");

                counter++;
            } else if (n < num)
            {
                printf("\nEl numero introducido es menor que el numero secreto.\n\n");

                counter++;
            } else {
                if (counter < 5)
                {
                    printf("Enhorabuena!!");
                } else if (counter > 5 && counter < 10)
                {
                    printf("No esta mal!!");
                } else if (counter > 10)
                {
                    printf("Debes practicar mas!!");
                }
            }
        } else {
            printf("\nDebes introducir valores validos.");
        }
        
    }
    

}