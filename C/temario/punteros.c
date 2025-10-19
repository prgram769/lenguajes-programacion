#include <stdio.h>

int main(void) {
    int edad = 37;

    printf("%p", &edad);

    int n1 = 10;

    int* pointer = &n1;

    printf("\n%p", pointer);

    // tipos de punteros

    // NULL

    int *NULLPointer = NULL;

    printf("\n%p", NULLPointer);

    // Void

    void *voidPointer;

    printf("\n%p", voidPointer);

    voidPointer = &edad;

    printf("\n%p", voidPointer);

    // wild

    int *wildPointer;

    printf("\n%p", wildPointer);
}