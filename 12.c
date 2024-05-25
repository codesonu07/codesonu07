#include <stdio.h>

#define ROWS 3 // Number of rows
#define COLS 4 // Number of columns

int main() {
    int array[ROWS][COLS]; // Declare the 2D array
    int i, j;

    // Initialize the array elements
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Print the array elements
    printf("Elements of the array:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
