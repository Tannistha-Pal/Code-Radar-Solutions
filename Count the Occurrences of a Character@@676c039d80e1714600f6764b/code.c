#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[1000], ch;
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline (if present)
    str[strcspn(str, "\n")] = '\0';

    // Input character to count
    scanf("%c", &ch);

    // Count occurrences
    int result = countOccurrences(str, ch);

    // Output result
    printf("%d\n",result);

    return 0;
}
