#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_SIZE 100

void ArrayCreate(const int size, int arr[size]);

void ArrayRandomFill(const int size, int arr[size]);

void ArrayPrint(const int size, int arr[size]);

static int MidCrossMax(const int size, int arr[size]);

int MaxSubArray(const int size, int arr[size]);

