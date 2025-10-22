#include <stdio.h>

int main(void) {
    typedef struct
    {
        char name[100];
        int age;
        float hight, weight;
    } person;
    
    person person1;

    int goodComprobation = 0;

    printf("Tell me your personal information in this order: name, age, hight and weight\n");

    scanf("%s", person1.name);

    if (scanf("%d", &person1.age) == 1)
    {
        printf("\nOk\n");
    } else {
        printf("\nYou must enter valid data.\n");

        return 0;
    }
    
    if (scanf("%f %f", &person1.hight, &person1.weight) == 2)
    {
        printf("\nOk\n");
        printf("\nWelcome, %s, your age is %d, your hight is %.2f and your weight is %.2f.", person1.name, person1.age, person1.hight, person1.weight);
    } else {
        printf("\nYou must enter valid data.\n");
    }
    
    
    // if (scanf("%d %f %f", &person1.age, &person1.hight, &person1.weight) == 3)
    // {
    //     printf("\nWelcome, %s, your age are %d, your hight are %.2f and your weight are %.2f", person1.name, person1.age, person1.hight, person1.weight);
    // } else {
    //     printf("\nYou must enter valid data.\n");
    // }
    
}