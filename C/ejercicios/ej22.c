/*10. Escriba un programa en C que, introducidos por teclado tres valores enteros, los
muestre en pantalla de mayor a menor.*/

#include <stdio.h>

int main(void) {
    int n1,n2,n3, elder, minor, medium;

    printf("Introduce 3 numeros enteros: \n\n");

    if (scanf("%d %d %d", &n1, &n2, &n3) == 3)
    {
        elder = n1;
        minor = n1;
        medium = n1;

        if (elder < n2)
        {
            elder = n2;
        }
        if (elder < n3)
        {
            elder = n3;
        }
        if (minor > n2)
        {
            minor = n2;
        }
        if (minor > n3)
        {
            minor = n3;
        }

        if (n2 > minor && n2 < elder)
        {
            medium = n2;
        }
        if (n3 > minor && n3 < elder)
        {
            medium = n3;
        }
        
        printf("\nEl mayor es: %d, lo sigue %d y por ultimo %d", elder, medium, minor);
        
    } else {
        printf("\nIntroduce valores validos.");
    }
    
}