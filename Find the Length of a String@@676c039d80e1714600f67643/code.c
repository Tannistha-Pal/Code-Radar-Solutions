#include <stdio.h>

// Function to calculate string length manually
int findStringLength(char str[]) {
    int length = 0;

    // Count characters until the null terminator '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];
    scanf("%99s", str);  // Reads a single word (use fgets for full sentences)

    // Calculate length without strlen()
    int length = findStringLength(str);

    // Print the length of the string
    printf("%d\n", length);

    return 0;
}
