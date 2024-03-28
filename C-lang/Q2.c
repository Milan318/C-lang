#include <stdio.h>

float array(int arr[][3], int rows, int cols) {
    int total_sum = 0;
    int total_elements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total_sum += arr[i][j];
        }
    }

    if (total_elements == 0) {
        return 0; 
    }

    return (float)total_sum / total_elements;
}

int main() {
    
    int array_2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    float average = array(array_2d, rows, cols);

    printf("all elements : %.2f\n", average);

    return 0;
}
