#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[200];

    // Input the string
    fgets(str, sizeof(str), stdin);
    
    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Toggle the case of the string
    toggleCase(str);

    // Print the modified string
    printf("%s\n", str);

    return 0;
}
