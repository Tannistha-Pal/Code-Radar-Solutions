#include <stdio.h>
// Function to flip all bits of a binary number (bitwise NOT)
unsigned int flipBits(unsigned int num) {
    return ~num;
}
int main() {
    unsigned int num;
    scanf("%d", &num);
    
    // Flipping all bits
    unsigned int result = flipBits(num);
    
    printf("%d\n", result);
    
    return 0;
}