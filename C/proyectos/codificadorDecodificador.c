/*This is a program to encode and decode nums in decimal to hexadecimal, binary and octal and conversely, ONLY NUMBERS WITHOUT COMMA*/

#include <stdio.h>

int encodeToBinary(int number) {
    int binaryRestArray[256];
    int i, counter;

    i = counter = 0;

    while (number > 0)
    {
        binaryRestArray[i] = number % 2;
// ~
        counter++;

        i++;

        number = number / 2;
    }

    for (i = counter - 1; i >= 0; i--)
    {            
        printf("%d", binaryRestArray[i]);
    }
}

int encodeToOctal(int number) {
    int octalRestArray[256];
    int i, counter;

    i = counter = 0;

    while (number > 0)
    {
        octalRestArray[i] = number % 8;

        counter++;

        i++;

        number = number / 8;
    }

    for (i = counter - 1; i >= 0; i--)
    {
        printf("%d", octalRestArray[i]);
    }
    
}

int encodeToHexadecimal(int number) {
    char hexadecimalRestArray[256];
    int i, counter;

    i = counter = 0;

    while (number > 0)
    {
        hexadecimalRestArray[i] = number % 16;

        counter++;

        switch (hexadecimalRestArray[i])
        {
        case 0:
            hexadecimalRestArray[i] = '0';
            break;
        case 1:
            hexadecimalRestArray[i] = '1';
            break;
        case 2:
            hexadecimalRestArray[i] = '2';
            break;
        case 3:
            hexadecimalRestArray[i] = '3';
            break;
        case 4:
            hexadecimalRestArray[i] = '4';
            break;
        case 5:
            hexadecimalRestArray[i] = '5';
            break;
        case 6:
            hexadecimalRestArray[i] = '6';
            break;
        case 7:
            hexadecimalRestArray[i] = '7';
            break;
        case 8:
            hexadecimalRestArray[i] = '8';
            break;
        case 9:
            hexadecimalRestArray[i] = '9';
            break;
        case 10:
            hexadecimalRestArray[i] = 'A';
            break;
        case 11:
            hexadecimalRestArray[i] = 'B';
            break;
        case 12:
            hexadecimalRestArray[i] = 'C';
            break;
        case 13:
            hexadecimalRestArray[i] = 'D';
            break;
        case 14:
            hexadecimalRestArray[i] = 'E';
            break;
        case 15:
            hexadecimalRestArray[i] = 'F';
            break;
        }

        i++;

        number = number / 16;
    }

    for (i = counter - 1; i >= 0; i--)
    {
        printf("%c", hexadecimalRestArray[i]);
    }
    
}

int decodeFromBinary(int numbers[]) {
    
}

int main(void) {
    int option; 

    printf("|--ENCODER-DECODER--|\n\n");
    printf("What do you want to do?\n1. Encode. 2. Decode.\n\n");

    if (scanf("%d", &option) == 1)
    {
        if (option == 1)
        {
            int numberToEncode;

            printf("\nWhich system do you want to encode from decimal?\n1. Binary. 2. Octal. 3. Hexadecimal. 4. Exit.\n\n");

            if (scanf("%d", &option) == 1)
            {
                if (option == 1)
                {
                    printf("\nWelcome to de encode system, you have to enter the number that you want to encode in binary:\n\n");
                    
                    if (scanf("%d", &numberToEncode) == 1)
                    {
                        encodeToBinary(numberToEncode);
                    } else {
                        printf("\nYou must enter valid data.");
                    }

                } else if (option == 2)
                {
                    printf("\nWelcome to de encode system, you have to enter the number that you want to encode in octal:\n\n");

                    if (scanf("%d", &numberToEncode) == 1)
                    {
                        encodeToOctal(numberToEncode);
                    } else {
                        printf("\nYou must enter valid data.");
                    }
                    
                } else if (option == 3)
                {
                    printf("\nWelcome to de encode system, you have to enter the number that you want to encode in hexadecimal:\n\n");

                    if (scanf("%d", &numberToEncode) == 1)
                    {
                        encodeToHexadecimal(numberToEncode);
                    } else {
                        printf("\nYou must enter valid data.");
                    }
                    
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
            int numberToDecode[256];
            int i;

            printf("\nWhat what system do you want to decode to decimal:\n1. Binary. 2. Octal. 3.Hexadecimal. 4.Exit.\n\n");

            if (scanf("%d", &option) == 1)
            {
                printf("\nWelcome to decode system, you have to enter the number that you want to decode from binary:\n\n");

                while ((numberToDecode[i] = getchar()) != EOF)
                {
                    if (numberToDecode[i] == 0 || numberToDecode[i] == 1)
                    {
                        i++;
                    } else {
                        printf("\nError: Binary system only use two simbols (0 and 1).");
                    }
                    
                }
                
            } else if (option == 2)
            {
                ;
            } else if (option == 3)
            {
                ;
            } else if (option == 4)
            {
                printf("\nLeaving...");

                return 0;
            } else {
                printf("\nYou must enter the requested data.");
            }
            
        } else {
            printf("\nYou must enter the requested data.");
        }
        
    } else {
        printf("\nYou must enter valid data.");
    }
    
}