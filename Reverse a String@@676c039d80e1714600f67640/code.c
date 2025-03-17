#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int left = 0, right = strlen(str) - 1;

    // Swap characters from both ends
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%99s", str);  // Using %99s to prevent buffer overflow

    // Reverse the string
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
