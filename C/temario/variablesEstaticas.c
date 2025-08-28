#include <stdio.h>

int incrementarEdad() {
    int edad = 0;
    edad++;
    return edad;
}

int main(void) {
    printf("%d\n", incrementarEdad());
    printf("%d\n", incrementarEdad());
    printf("%d\n", incrementarEdad());

}

/*Siempre va a retornar 1*/