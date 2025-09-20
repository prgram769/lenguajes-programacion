/*imprime la tabla fahrenheit*/

#include <stdio.h>

/*este ejemplo está hecho de manera muy compacta, pero se podria hacer de diferentes formas
que quizá sean mas legibles por ejemplo utilizando mas variables pero entonces no seria tan compacto*/

int main(void) {
    int fahrenheit;

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20)
    {
        printf("%3d %6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));
    }
    
}