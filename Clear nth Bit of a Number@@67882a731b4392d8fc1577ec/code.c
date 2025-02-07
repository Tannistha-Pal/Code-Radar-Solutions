#include<stdio.h>
// Function to clear the nth bit of a number
unsigned int clearNthBit(unsigned int num, int n) {
    return num & ~(1 << n);
}

int main() {
    unsigned int num;
    int n;
    // Input from user
    scanf("%d", &num);
    scanf("%d", &n);
    // Clearing the nth bit
    unsigned int result = clearNthBit(num, n);
    printf("%d", result);
    return 0;
}
