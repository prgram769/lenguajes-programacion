/*This is a program to encode and decode nums in decimal to hexadecimal, binary and octal and conversely*/

#include <stdio.h>

float encodeBinary(float number) {
    int binaryArray[256];
    
    
}

int main(void) {
    int option; 
    float numberToEncode;

    printf("|--ENCODER-DECODER--|\n\n");
    printf("What do you want to do?\n1. Encode. 2. Decode.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            printf("\nWhich system do you want to encode from decimal?\n1. Binary. 2. Octal. 3. Hexadecimal. 4. Exit.\n\n");

            if (scanf("%d", &option) == 1)
            {
                if (option == 1)
                {
                    printf("\nWelcome to de encode system, you have to enter the number that you want to encode in binary:\n\n");

                } else if (option == 2)
                {
                    printf("\nWelcome to de encode system, you have to enter the number that you want to encode in octal:\n\n");
                } else if (option == 3)
                {
                    printf("\nWelcome to de encode system, you have to enter the number that you want to encode in hexadecimal:\n\n");
                } else if (option == 4)
                {
                    printf("\nLeaving...");

                    return 0;
                } else {
                    printf("\nYou must enter the requested data.");
                }
                
            } else {
                printf("\nYou must enter valid data.");
            }
            
        } else if (option == 2)
        {
            /* code */
        } else {
            printf("\nYou must enter the requested data.");
        }
        
    } else {
        printf("\nYou must enter valid data.");
    }
    
}