#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 10;
    unsigned long number = 0;
    int sum = 1;

    printf("Primeira sequência:\n");
    
    number = 3;
    for (int i = 0; i < count; i++)
    {
        printf("%li, ", number);
        sum += 2;
        number += sum;
    }
    printf("...\n");

// ---------------------------------------------

    printf("Segunda sequência:\n");

    number = 3;
    sum = 1;
    for (int i = 0; i < count; i++)
    {
        printf("%li, ", number);
        sum += 1;
        number += sum;
    }
    printf("...\n");

// ---------------------------------------------

    printf("Terceira sequência:\n");

    number = 2;
    
    for (int i = 0; i < count; i++)
    {
        printf("%li, ", number);
        number*= number;
    }
    printf("...\n");
}