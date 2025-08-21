/*8. Escriba un programa que pida un tiempo en segundos y lo muestre convertido a
minutos y segundos.*/

#include <stdio.h>

int main(void) {
    int secs;

    printf("Dime un numero de segundos para pasarlos a minutos y segundos: \n\n");

    scanf("%d", &secs);

    int mins = secs / 60;
    int minsSecs = secs % 60;

    printf("\nEstos %d segundos son %d minutos y %d segundos", secs, mins, minsSecs);
}