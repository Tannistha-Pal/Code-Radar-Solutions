#include <stdio.h>
#include <ctype.h> // For tolower()
#include <string.h> // For strlen()

// Function to count vowels in a string
int countVowels(char str[]) {
    int count = 0;
    
    // Iterate through each character of the string
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]); // Convert to lowercase to handle both cases
        
        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    scanf("%99[^\n]", str);  // Reads a full line (including spaces)

    // Count and display the number of vowels
    printf("%d\n", countVowels(str));

    return 0;
}
