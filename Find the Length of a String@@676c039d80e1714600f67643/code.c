#include <stdio.h>

// Function to find the length of the string (including spaces)
int findStringLength(char str[]) {
    int length = 0;

    // Count characters until we reach '\0' (excluding it)
    while (str[length] != '\0') {
        length++;
    }

    // Remove the newline character (if fgets() is used)
    if (length > 0 && str[length - 1] == '\n') {
        length--; // Ignore the newline character
    }

    return length;
}

int main() {
    char str[100]; // Define a character array to hold the string
    fgets(str, sizeof(str), stdin); // Read input (including spaces)

    // Compute the length
    int length = findStringLength(str);

    // Display the result
    printf("%d\n", length);

    return 0;
}
