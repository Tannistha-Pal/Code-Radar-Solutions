#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char *str) {
    int maxLen = 0, curLen = 0;
    char longestWord[100] = {0};  
    char currentWord[100] = {0};  

    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {  
            currentWord[j++] = str[i];  
            curLen++;
        } else {
            if (curLen > maxLen) {  
                maxLen = curLen;
                strcpy(longestWord, currentWord);
            }
            j = 0;  
            curLen = 0;
            memset(currentWord, 0, sizeof(currentWord));  
        }
        i++;
    }

    if (curLen > maxLen) {  
        strcpy(longestWord, currentWord);
    }

    printf("%s\n", longestWord);
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str);

    return 0;
}
