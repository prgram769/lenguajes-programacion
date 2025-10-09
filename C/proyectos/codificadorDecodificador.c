/*This is a program to encode and decode nums in decimal to hexadecimal, binary and octal and conversely, ONLY NUMBERS WITHOUT COMMA*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int encodeToBinary(int number) {
    int binaryRestArray[256];
    int i, counter;

    i = counter = 0;

    while (number > 0)
    {
        binaryRestArray[i] = number % 2;

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

int decodeFromBinary(int number) {
    int arrayNumbers[256];

    int i;

    int modules = 10;
    int divisions = 1;

    int numberLengh = 0;

    int originNumber = number;

    while (number != 0)
    {
        number = number / 10;

        numberLengh++;
    }
                    
    number = originNumber;

    int counter;

    int TNF = 0;

    int validateGood = 0;

    for (i = 0; i < numberLengh; i++)
    {   
        arrayNumbers[i] = number % modules / divisions;

        if (arrayNumbers[i] == 0 || arrayNumbers[i] == 1)
        {
            modules *= 10;
            divisions *= 10;

            printf("\nDigit: %d", arrayNumbers[i]);

            TNF = 0;
                            
            for (counter = 0; counter < numberLengh; counter++)
            {
                TNF += arrayNumbers[counter] * pow(2, counter);
            }

            validateGood = 1;
                            
        } else {
            validateGood = 0;

            printf("\nError: Binary system only have 2 symbols, 1 and 0.");

            break;
        }    
    }

    if (validateGood == 1)
    {
        printf("\n\nThe number that you introduced in binary, in decimal is %d.", TNF);
    } else {
        printf("\nYou must run again the program if you want decode any number.");
    }
                            
}

int decodeFromOctal(int number) {
    int arrayNumbers[256];

    int i;

    int modules = 10;
    int divisions = 1;

    int numberLengh = 0;

    int originNumber = number;

    while (number != 0)
    {
        number = number / 10;

        numberLengh++;
    }
    
    number = originNumber;

    int counter;

    int TNF = 0;

    int validateGood;

    for (i = 0; i < numberLengh; i++)
    {
        arrayNumbers[i] = number % modules / divisions;

        if (arrayNumbers[i] >= 0 && arrayNumbers[i] <= 7)
        {
            modules *= 10;
            divisions *= 10;

            printf("\nDigit: %d", arrayNumbers[i]);

            TNF = 0;

            for (counter = 0; counter < numberLengh; counter++)
            {
                TNF += arrayNumbers[counter] * pow(8, counter);
            }        

            validateGood = 1;

        } else {
            validateGood = 0;
            
            printf("\nError: Octal system only have 8 symbols, from 0 to 7.");

            break;
        }
        
    }

    if (validateGood == 1)
    {
        printf("\n\nThe number that you introduced in octal, in decimal is %d.", TNF);
    } else {
        printf("\nYou must run again the program if you want decode any number.");
    }
    
}

int decodeFromHexadecimal(char number[]) {
    int i, numberLengh;

    int arrayLengh = sizeof(number) / number[0];

    for (i = 0; i < arrayLengh; i++)
    {
        printf("%c", number[i]);
    }

    printf("%d", numberLengh);

    printf("%s", number);
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
            int numberToDecode;

            printf("\nWhat what system do you want to decode to decimal:\n1. Binary. 2. Octal. 3.Hexadecimal. 4.Exit.\n\n");

            if (scanf("%d", &option) == 1)
            {
                if (option == 1)
                {
                    printf("\nWelcome to decode system, you have to enter the number that you want to decode from binary:\n\n");

                    if (scanf("%d", &numberToDecode) == 1)
                    {
                        decodeFromBinary(numberToDecode);   
                    } else {
                        printf("\nYou must enter valid data.");
                    }                  
                } else if (option == 2) {
                    printf("\nWelcome to decode system, you have to enter the number that you want to decode from octal:\n\n");

                    if (scanf("%d", &numberToDecode) == 1)
                    {
                        decodeFromOctal(numberToDecode);
                    } else {
                        printf("\nYou must enter valid data.");
                    }
                
                } else if (option == 3) {
                    const int maxLengh = 256;

                    char numberToDecode[maxLengh];

                    printf("\nWelcome to decode system, you have to enter the number that you want to decode from Hexadecimal: \n\n");

                    scanf("%s", numberToDecode);

                    decodeFromHexadecimal(numberToDecode);
                    
                } else if (option == 4) {
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
}
/*Program made from rugby01*/