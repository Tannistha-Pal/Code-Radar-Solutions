#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline

    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';  // Remove trailing newline

    // Check if substring exists
    if (strstr(str, sub) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
