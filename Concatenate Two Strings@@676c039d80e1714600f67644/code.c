#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Append characters of str2 to str1
    for (int i = 0; i <= len2; i++) { // Including '\0'
        str1[len1 + i] = str2[i];
    }
}

int main() {
    char str1[200], str2[100];  // Ensure str1 has enough space

    scanf("%s", str1);  // Using %s (for single-word input)
    scanf("%s", str2);

    // Concatenate str2 to str1
    concatenateStrings(str1, str2);

    // Print the concatenated string
    printf("Concatenated String: %s\n", str1);

    return 0;
}
