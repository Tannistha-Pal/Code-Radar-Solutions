#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    scanf("%99s", str);  // Reading input (single word only)

    // Check if it's a palindrome
    if (isPalindrome(str))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
