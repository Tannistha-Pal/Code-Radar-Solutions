#include <stdio.h>
// Function to toggle the nth bit of a number
unsigned int toggleNthBit(unsigned int num, int n) {
    return num ^ (1 << n);
}
int main() {
    unsigned int num;
    int n;
    // Input from user
    scanf("%u", &num);
    scanf("%d", &n);
    // Toggling the nth bit
    unsigned int result = toggleNthBit(num, n);
    printf("%u", result);
    return 0;
}