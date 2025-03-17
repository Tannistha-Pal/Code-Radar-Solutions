#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256 // Total ASCII characters

// Function to find the most frequent character in a string
char mostFrequentChar(char str[]) {
    int freq[ASCII_SIZE] = {0}; // Array to store frequency of characters
    int maxFreq = 0;
    char mostFrequent = '\0';

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++; // Use unsigned char to handle extended ASCII

        // Update most frequent character if needed
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            mostFrequent = str[i];
        }
    }

    return mostFrequent;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline (if present)
    str[strcspn(str, "\n")] = '\0';

    // Find and print the most frequent character
    char result = mostFrequentChar(str);
    if (result != '\0')
        printf("%c\n", result);
    else
        printf("String is empty.\n");

    return 0;
}
