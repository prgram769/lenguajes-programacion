#include <stdio.h>

int main(void) {
    /*Contar caracteres de la entrada 3ª version*/

    double counter;

    for (counter = 0; getchar() != EOF; ++counter)
    {
        printf("%.0f\n", counter);
    }
    
}