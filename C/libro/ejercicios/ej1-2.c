/*Experimente con descubrir que pasa cuando la cadena del argumento de printf contiene \c en donde c es algun caracter no puesto en
la lista anteriormente*/

#include <stdio.h>

int main(void) {
    printf("hola mundo\b");
    printf("\nhola mundo\f");
}