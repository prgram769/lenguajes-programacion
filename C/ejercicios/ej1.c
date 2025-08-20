/*-1. Escriba un programa que muestre en la pantalla un mensaje de saludo, por ejemplo
"Hola",y luego muestre el mensaje "Por favor introduzca el año en que nació". El
programa debe leer ese valor y almacenarlo en una variable de tipo entero llamada
fecha. Por último haga que el programa escriba la frase " Si usted nació en <valor de la
fecha leída> este año cumple <edad calculada> años.
Es recomendable que vaya escribiendo el programa por pasos (mostrar saludo, pedir
fecha, leer fecha,…) y compilándolo después de cada paso para comprobar que
funciona.*/

#include <stdio.h>
#include <time.h>

int main(void) {
    int birthYear;
    
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    int year = t->tm_year + 1900;

    printf("Hola, bienvenido.\n Introduzca su año de nacimiento porfavor, gracias.\n\n");
    scanf("%d", &birthYear);

    int happyBirthday = year - birthYear;

    printf("\nSi usted nació en el año %d, este año cumple %d años.", birthYear, happyBirthday);

}