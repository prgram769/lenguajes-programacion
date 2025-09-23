/*Escribe un programa que copie su entrada a la salida, reemplazando cada cadena de uno o mas blancos por un solo blanco*/

#include <stdio.h>

int main(void) {
    int character, characterBefore;

    while ((character = getchar()) != EOF)
    {
        if (character != ' ' && character != '\t') /*aqui estamos verificando que character sea distinto de espacio o tabulacion
                                                     en dicho caso, colocaremos la entrada en la salida y pondremos a una variable el valor de l*/
        {
            putchar(character);

            characterBefore = 'l';
        }

        if (character == ' ' || character == '\t') /*aqui verificamos que character sea un espacio o tabulacion, en dicho caso, 
                                                     me verificara si el caracter anterior era una letra en caso de que sea, hará un print de un espacio
                                                     posteriormente pondra el valor de characterBefore a 's' que significara que el caracter anterior es un espacio*/
        {
            if (characterBefore == 'l')
            {
                printf(" ");

                characterBefore = 's';
            }
            
        }
        
    }
    
}