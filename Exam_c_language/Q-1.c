// write a c program that uses pointers to find the sum of two 1D arrays?

#include <stdio.h>
void sumArray(int *arr1, int *arr2, int *result, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }
}
int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {6, 7, 8, 9, 10};
    int sum[5];
    sumArray(array1, array2, sum, 5);
    printf("Sum of the arrays:\n");
    for (int i = 0; i < 5; ++i) 
    {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
