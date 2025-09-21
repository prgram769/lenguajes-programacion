#include <stdio.h>

/*copia la entrada a la salida*/

int main(void) {
    int character;
    
    character = getchar();

    while (character != EOF)
    {
        putchar(character);

        character = getchar();
    }
    
}