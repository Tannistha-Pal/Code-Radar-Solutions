#include <stdio.h>
#include <string.h>

void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[1000];
    char oldChar, newChar;

    // Read input
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &oldChar);
    scanf(" %c", &newChar);

    // Remove trailing newline (if present)
    str[strcspn(str, "\n")] = '\0';

    // Replace characters
    replaceChar(str, oldChar, newChar);

    // Print the modified string
    printf("%s\n", str);

    return 0;
}
