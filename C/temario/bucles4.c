#include <stdio.h>

int main(void) {

    int algunaVariable = 0;

    for (int i = 0; i <= 10; i++)
    {
        
        algunaVariable = algunaVariable+2;
        if (i == 4 && algunaVariable == 10)
        {
            printf("Condicion cumplida");
            break;
        }
        
    }
    
}