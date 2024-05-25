#include <stdio.h>

int main() {
    int num = 10; // Declare and initialize a variable

    // Fetch and print the address of the variable
    printf("Address of num: %d\n", (void*)&num);

    return 0;
}
