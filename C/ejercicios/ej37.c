/*10. Escriba y compile el siguiente programa en C:
#include <stdio.h>
int main(void)
{
int a, b;
char cadena[8];
int c;
a=7; b=14; c=128;
printf ("Asigne un valor a la cadena de caracteres ");
scanf("%[^\n]", cadena);
printf ("La cadena es %s\n", cadena);
printf ("El valor asignado a las variables
es:\na=%d\nb=%d\nc=%d\n", a, b, c);
system("PAUSE");
return (0);
}
¿Detecta algún error?
Ejecute el programa anterior asignando a cadena el valor "Hola", ¿qué sucede? Repita la
ejecución asignando a cadena el valor "Buenos días", ¿qué observa?*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 7, b = 14, c = 128;
    char cadena[8];

    printf("Ingresa un valor a la cadena de caracteres \n\n");

    if (fgets(cadena, sizeof(cadena), stdin) != NULL)
    {
        cadena[strcspn(cadena, "\n")] = 0;
        printf("La cadena es %s\n\n", cadena);
        printf("El valor asignado a las variables es: \na = %d\nb = %d\nc = %d\n", a, b, c);
        return(0);
    }
    
}