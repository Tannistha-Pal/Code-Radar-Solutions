#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    int len1 = strlen(str1);
    
    // Remove newline character from str1 if present
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    int len2 = strlen(str2);
    
    // Remove newline character from str2 if present
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    strcat(str1, str2);  // Concatenates str2 to str1
}

int main() {
    char str1[200], str2[100];
    fgets(str1, sizeof(str1), stdin);  // Reads the whole line
    fgets(str2, sizeof(str2), stdin);  // Reads the whole line

    // Concatenate str2 to str1
    concatenateStrings(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}
