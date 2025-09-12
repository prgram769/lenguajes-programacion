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

int validateLetterNum(int dniNum, char letterI) {
    char letter;
    int rest = dniNum % 23;
    
    switch (rest)
    {
    case 0:
        letter = 'T';
        break;
    case 1:
        letter = 'R';
        break;
    case 2:
        letter = 'W';
        break;
    case 3:
        letter = 'A';
        break;
    case 4: 
        letter = 'G';
        break;
    case 5:
        letter = 'M';
        break;
    case 6:
        letter = 'Y';
        break;
    case 7:
        letter = 'F';
        break;
    case 8:
        letter = 'P';
        break;
    case 9:
        letter = 'D';
        break;
    case 10: 
        letter = 'X';
        break;
    case 11:
        letter = 'B';
        break;
    case 12:
        letter = 'N';
        break;
    case 13:
        letter = 'J';
        break;
    case 14:
        letter = 'Z';
        break;
    case 15:
        letter = 'S';
        break;
    case 16: 
        letter = 'Q';
        break;
    case 17:
        letter = 'V';
        break;
    case 18:
        letter = 'H';
        break;
    case 19:
        letter = 'L';
        break;
    case 20:
        letter = 'C';
        break;
    case 21:
        letter = 'K';
        break;
    case 22: 
        letter = 'E';
        break;
    default:
        printf("\nError.");
        break;
    } 

    if (letterI == letter)
    {
        return 1;
    } else {
        return 0;
    }
    
}

int main(void)
{
    char letterI;
    int boolean = 1;
    int dniN;
    int c;

    while (boolean == 1)
    {
        printf("\nDebes introducir tu numero del DNI:\n\n");

        if (scanf("%d", &dniN) == 1)
        {
            printf("\nDebes introducir tu letra del DNI:\n\n");

            scanf(" %c", &letterI);

            if (validate(dniN) == 1)
            {
                
                if (validateLetterNum(dniN, letterI) == 1)
                {
                    printf("\nEl NIF es correcto.");

                    boolean = 0;

                    break;
                } else {
                    printf("\nEl NIF es incorrecto.\n");
                }

            }
        }
        else
        {
            printf("\nDebes introducir valores validos.\n");
        }
    }
}