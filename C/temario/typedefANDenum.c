#include <stdio.h>

typedef enum {
    lunes,
    martes,
    miercoles,
    jueves,
    viernes,
    sabado,
    domingo
} DIASEMANA;

int main(void) {
    DIASEMANA dia = lunes;

    if (dia == lunes)
    {
        printf("Es lunes.");
    } else {
        printf("No es lunes.");
    }
    
}