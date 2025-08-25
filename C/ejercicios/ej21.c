/*9. Escriba un programa en C que permita introducir 5 números enteros por teclado y
muestre el menor de ellos.*/

#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4,n5, minor;

    printf("Introduce 5 numeros enteros. \n\n");

    if (scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5) == 5)
    {
      minor = n1;

      if (minor > n2)
      {
        minor = n2;
      }
      if (minor > n3)
      {
        minor = n3;
      }
      if (minor > n4)
      {
        minor = n4;
      }
      if (minor > n5)
      {
        minor = n5;
      }

      printf("\nEl numero menor es: %d", minor);
    } else {
        printf("\nValor incorrecto, debes introducir un numero valido.");
    }
    
}