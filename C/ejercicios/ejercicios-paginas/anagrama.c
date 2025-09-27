/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    bool characterInString;

    int i, i2;

    char string1[35];
    char string2[35];

    printf("Enter two words:\n\n");

    scanf("%s", string1);
    scanf("%s", string2);
    
    if (strlen(string1) == strlen(string2))
    {
        for (i = 0; i < strlen(string1) - 1; i++)
        {
            for (i2 = 0; i2 < strlen(string1) - i - 1; i2++)
            {
                if (string1[i2] > string1[i2 + 1])
                {
                    char node = string1[i2];

                    string1[i2] = string1[i2 + 1];
                    string1[i2 + 1] = node;
                }
                
            }
            
        }

        for (i = 0; i < strlen(string2) - 1; i++)
        {
            for (i2 = 0; i2 < strlen(string2) - i - 1; i2++)
            {
                if (string2[i2] > string2[i2 + 1])
                {
                    char node = string2[i2];

                    string2[i2] = string2[i2 + 1];
                    string2[i2 + 1] = node;
                }
                    
            }
                
        }

        if (strcmp(string1, string2) == 0)
        {
            characterInString = true;
        } else {
            characterInString = false;
        }

        if (characterInString == true)
        {
            printf("\nIs an anagram");
        } else {
            printf("\nIsn`t an anagram");
        }
        
    } else {
        printf("\nThe words you entered weren`t anagrams");
    }
    
}