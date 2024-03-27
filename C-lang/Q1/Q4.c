#include <stdio.h>

void cubearray(int *arr, int size) {
    printf("Cubes of array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", (*arr) * (*arr) * (*arr));
        arr++; 
    }
    printf("\n");
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    cubearray(arr, size);

    return 0;
}
