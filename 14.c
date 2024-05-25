#include <stdio.h>

#define ROWS 3
#define COLS 3

void addArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int result[ROWS][COLS]) {
    int i, j;

    // Adding corresponding elements of both arrays
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displayArray(int arr[ROWS][COLS]) {
    int i, j;

    // Displaying the array
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array1[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int array2[ROWS][COLS] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[ROWS][COLS];
    int i, j;

    // Adding arrays
    addArrays(array1, array2, result);

    // Displaying the result
    printf("Array 1:\n");
    displayArray(array1);
    printf("\nArray 2:\n");
    displayArray(array2);
    printf("\nResultant Array:\n");
    displayArray(result);

    return 0;
}
