#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256  // Total ASCII characters

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    int count[CHAR_SIZE] = {0};  // Frequency array

    // If lengths are not the same, they cannot be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;  // Decrease for str2
    }

    // If all counts are zero, they are anagrams
    for (int i = 0; i < CHAR_SIZE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    // Check if they are anagrams
    if (areAnagrams(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
