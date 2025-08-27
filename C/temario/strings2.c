
#include <stdio.h>
#include <string.h>

int main(void) {
    /*para leer lineas*/

    char line[50];

    printf("Introduce una linea: \n\n");

    if (fgets(line, sizeof(line), stdin) != NULL)
    {
        line[strcspn(line, "\n")] = 0;
        printf("La linea introducida es, %s!\n", line);    
    }
    
    
}