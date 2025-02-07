#include <stdio.h>
// Function to swap two numbers using XOR operator
void swapNumbers(int *a, int *b) {
    if (a == b) return; // Avoid self-swap 
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    // Swapping numbers
    swapNumbers(&num1, &num2);
    // Display swapped numbers
    printf("%d %d", num1, num2);
    return 0;
}
