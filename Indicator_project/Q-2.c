#include <stdio.h>

void cubeElements(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           *(arr + i * cols + j) = (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j));
        }
    }
}

void printArray(int *arr, int rows, int cols) {
    printf("Cubes of elements in the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], rows, cols);
    printArray(&arr[0][0], rows, cols);

    return 0;
}