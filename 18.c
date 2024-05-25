#include <stdio.h>

// Function declaration
int sum(int num1, int num2);

// Function definition
int sum(int num1, int num2) {
    return num1 + num2; // Return the sum of num1 and num2
}

int main() {
    int a = 5, b = 3, result;

    // Function call with arguments
    result = sum(a, b);

    // Display the result
    printf("Sum of %d and %d is: %d\n", a, b, result);

    return 0;
}
