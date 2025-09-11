/*6. Realizar un programa en C que verifique si existe o no concordancia entre los datos de
un NIF (DNI y letra) introducido por teclado. Para ello:
a. Tras solicitar el DNI se debe comprobar que el valor introducido es positivo y tiene
a lo sumo 8 dígitos. En caso de no cumplir estas condiciones se ha de indicar que el
DNI introducido es incorrecto y se pedirá un nuevo valor.
En la fase de verificación se debe utilizar una función que reciba como parámetro
el número del DNI y, tras hacer las comprobaciones pertinentes, devuelva el valor
VERDADERO (1) o el valor FALSO (0).
b. Una vez introducido un DNI correcto, se solicitará una letra y el programa debe
determinar si DNI y letra son concordantes.
Para ello el alumno debe:
b.1. Implementar una función que dado el número del DNI, devuelva la letra
que le corresponde. Para calcular dicha letra hay que tener en cuenta que la
misma es función del resto obtenido al dividir el número del DNI entre 23.
La relación entre ambos parámetros es:
Resto Letra

0 T     8 P      16 Q
1 R     9 D      17 V
2 W     10 X     18 H
3 A     11 B     19 L
4 G     12 N     20 C
5 M     13 J     21 K
6 Y     14 Z     22 E
7 F     15 S 

b.2 Implementar una función que reciba, entre otros parámetros, la letra del
DNI introducida por el usuario y devuelva si dicha letra corresponde o no
al DNI introducido.
c. Al final, el programa debe indicar al usuario si el NIF introducido es o no correcto.
Nota: En la resolución de este problema se sugiere hacer uso de las siguientes
funciones contenidas en la biblioteca estándar ctype.h.
int isalpha(int c); Devuelve verdadero si c es una letra
int toupper (int c); Devuelve el carácter en mayúscula correspondiente
al carácter pasado por parámetro.*/

#include <stdio.h>
#include <string.h>

int validate(int dniNum)
{
    char dniNString[15];

    if (dniNum > 0)
    {
        sprintf(dniNString, "%d", dniNum);

        if (strlen(dniNString) == 8)
        {
            return 1;
        } else
        {
            printf("\nError, este numero del DNI es incorrecto, debes introducir uno valido.\n");

            return 0;
        }
    }
    else
    {
        printf("\nError, este numero del DNI es incorrecto, debes introducir uno valido.\n");
    }
}

char letterValidate(int dniNum) {
    int rest = dniNum % 23;

    switch (rest)
    {
    case 0:
        return 'T';
        break;
    case 1:
        return 'R';
        break;
    case 2:
        return 'W';
        break;
    case 3:
        return 'A';
        break;
    case 4: 
        return 'G';
        break;
    case 5:
        return 'M';
        break;
    case 6:
        return 'Y';
        break;
    case 7:
        return 'F';
        break;
    case 8:
        return 'P';
        break;
    case 9:
        return 'D';
        break;
    case 10: 
        return 'X';
        break;
    case 11:
        return 'B';
        break;
    case 12:
        return 'N';
        break;
    case 13:
        return 'J';
        break;
    case 14:
        return 'Z';
        break;
    case 15:
        return 'S';
        break;
    case 16: 
        return 'Q';
        break;
    case 17:
        return 'V';
        break;
    case 18:
        return 'H';
        break;
    case 19:
        return 'L';
        break;
    case 20:
        return 'C';
        break;
    case 21:
        return 'K';
        break;
    case 22: 
        return 'E';
        break;
    default:
        printf("\nError.");
        break;
    }
}

int validateLetterNum(int dniNum, char dniLetter[2]) {
    char array[23] = {"TRWAGMYFPDXBNJZSQVHLCKE"};
    
    for (int i = 0; i < 23; i++)
    {
        if (array[i] != dniLetter[0])
        {
            
        } else {
            printf("\nLa letra es correcta.\n");

            return 1;
        }
           
    }
}

int main(void)
{
    int boolean = 1;
    int dniN;

    while (boolean == 1)
    {
        printf("\nDebes introducir tu numero del DNI:\n\n");

        if (scanf("%d", &dniN) == 1)
        {
            if (validate(dniN) == 1)
            {
                boolean == 0;

                char dniLetter[2] = {letterValidate(dniN)};

                if (validateLetterNum(dniN, dniLetter) == 1)
                {
                    printf("\nEl NIF es correcto.");

                    break;
                } else {
                    printf("\nEl NIF es incorrecto.");
                }

            }
        }
        else
        {
            printf("\nDebes introducir valores validos.\n");
        }
    }
}