#include <stdio.h>
#include <string.h>  // Include this header for strcspn()

void removeSpaces(char *str) {
    int i = 0, j = 0;

    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null terminate the modified string
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    removeSpaces(str);
    printf("%s\n", str);

    return 0;
}
