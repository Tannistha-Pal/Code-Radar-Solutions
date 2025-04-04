#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInString(char *str) {
    char *wordStart = str;
    char *temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }

    reverseWord(wordStart, temp - 1);
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = 0;

    reverseWordsInString(str);
    printf("%s\n", str);

    return 0;
}
