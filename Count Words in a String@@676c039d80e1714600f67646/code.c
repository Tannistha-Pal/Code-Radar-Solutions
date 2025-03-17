#include <stdio.h>
#include <ctype.h>
// Function to count words in a string
int countWords(char str[]) {
    int count = 0, inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;  // Outside a word
        } else if (inWord == 0) {
            inWord = 1;  // Entering a new word
            count++;
        }
    }

    return count;
}
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  // Read full line including spaces
    // Count words and display result
    printf("Word count: %d\n", countWords(str));
    return 0;
}
