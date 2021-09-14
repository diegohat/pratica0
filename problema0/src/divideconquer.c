#include "divideconquer.h"

void ArrayCreate(const int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

void ArrayRandomFill(const int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        if(rand() % RANDOM_SIZE % 2 == 0)
        {
            arr[i] = rand() % RANDOM_SIZE * -1;
        }
        else
        {
            arr[i] = rand() % RANDOM_SIZE;
        }
    }
}

void ArrayPrint(const int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%i\t", arr[i]);
    }
    printf("\n");
}

static int MidCrossMax(const int size, int* arr)
{
    int lmax, rmax, tmp, i, m = (size / 2) - 1;
    
    for (i = m, tmp = 0, lmax = arr[m]; i >= 0; i--) {
        tmp += arr[i];
        lmax = tmp > lmax ? tmp : lmax;
    }
    
    for (i = m + 1, tmp = 0, rmax = arr[m + 1]; i < size; i++) {
        tmp += arr[i];
        rmax = tmp > rmax ? tmp : rmax;
    }

    return lmax + rmax;
}

int MaxSubArray(const int size, int* arr)
{
    int mid = size / 2;
    int max, left, right, cross;

    if (size == 1)
    return *arr;

    left = MaxSubArray(mid, arr);
    right = MaxSubArray(size - mid, arr + mid);
    cross = MidCrossMax(size, arr);

    max = left > right ? left : right;
    max = max > cross ? max : cross;

    return max;
}