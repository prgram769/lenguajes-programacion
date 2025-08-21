/*12. Indique cuáles de estas instrucciones son correctas y cuáles incorrectas, e indique cuál
es el resultado de su ejecución.
i=i+1;
printf("%d", 4+20);
printf("suma=var_uno + var_dos = %i + %i", var_uno, var_dos, suma);*/

#include <stdio.h>

int main(void) {
    int i;

    i = i + 1;

    printf("La expresion i = i+1 es correcta si se ha inicializado la variable previamente, sino, seria incorrecta.\n");
    printf("La expresion printf(, 4+20) es correcta ya que le estamos pasando un numero integro.\n");
    printf("%d", 20+4);
    printf("La expresion printf(suma=var_uno + var_dos = i + i), var_uno, var_dos, suma es incorrecta ya que no se inicializa ni se declaran en ningun momento las variables");
}