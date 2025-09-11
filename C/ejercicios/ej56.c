/*5. La nota del examen de una asignatura corresponde en un 20% al primer parcial, un
20% al segundo parcial y un 60% el examen final. La nota final es la mejor entre la
nota del examen y la nota obtenida con la evaluación continua (teniendo en cuenta los
dos parciales).
Escriba un programa que pida estas tres notas y calcule la nota final de un alumno. A
continuación, el programa debe preguntar al usuario si quiere calcular una nueva nota
o finalizar (pulsando la tecla ‘s’). Utilice una función para calcular la nota y otra para
obtener el máximo (que puede ser la desarrollada en el ejercicio 2).*/

#include <stdio.h>

float calcMark(float ex1, float ex2, float exFinal) {
    float first = ex1 * 0.20;
    float second = ex2 * 0.20;
    float final = exFinal * 0.60;

    float totalResult = first + second + final;

    if (totalResult > exFinal)
    {
        return totalResult;
    } else {
        return exFinal;
    }
    
}

int main(void) {
    float ex1, ex2, exFinal;
    float mark;

    printf("Debes introducir las notas de tus examenes en orden:\n\n");

    if (scanf("%f %f %f", &ex1, &ex2, &exFinal) == 3)
    {
        float finalMark = calcMark(ex1, ex2, exFinal);

        printf("\nLa nota final del alumno es %.2f", finalMark);
    } else {
        printf("\nDebes introducir valores validos.\n");
    }
    
}