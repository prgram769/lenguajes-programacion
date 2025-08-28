#include <stdio.h>

int incrementarEdad() {
    static int edad = 0;
    edad++;
    return edad;
}

int main(void) {
    printf("%d\n", incrementarEdad());
    printf("%d\n", incrementarEdad());
    printf("%d\n", incrementarEdad());
}

/*Se va incrementando ya que es una variable estatica*/