#include <stdio.h>

int main(void) {
    /*Contar las lineas de la entrada*/

    int c, counter;

    counter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++counter;
            
            printf("%d\n", counter);
        }
        
    }
    
}