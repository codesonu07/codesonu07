#include <stdio.h>

// Function declaration
void printMessage(char message[]);

// Function definition
void printMessage(char message[]) {
    printf("%s\n", message);
}

int main() {
    // Function call with argument
    printMessage("This is a message passed as an argument to the function.");

    return 0;
}
