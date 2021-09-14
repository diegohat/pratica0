#include "divideconquer.h"

int main(void)
{
    srand(time(NULL));

    printf("Entre com o tamanho do vetor: ");
    int array_size = 0;
    scanf("%i", &array_size);

    int arr[array_size];

    ArrayCreate(array_size, arr);
    ArrayPrint(array_size, arr);
    ArrayRandomFill(array_size, arr);
    ArrayPrint(array_size, arr);

    int max = MaxSubArray(array_size, arr);

    printf("MAX SUBARRAY SUM = %i\n", max);

    return 0;
}