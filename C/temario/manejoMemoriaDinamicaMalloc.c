#include <stdio.h>
#include <stdlib.h>

int readAmount() {
    int amount;

    printf("Give me the amount of numbers that you want enter: \n");

    scanf("%d", &amount);
    
    return amount;
}

void read(int amount, int *numbers) {
    int i;

    for (i = 0; i < amount; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
}

void print(int amount, int *numbers) {
    int i;

    for (i = 0; i < amount; i++)
    {
        printf("%d, ", numbers[i] + 1);
    }
    
}

int main(void) {
    int amount = readAmount();
    int *numbers = malloc(amount * sizeof(int));

    read(amount, numbers);
    print(amount, numbers);

    free(numbers);

    return EXIT_SUCCESS;
}