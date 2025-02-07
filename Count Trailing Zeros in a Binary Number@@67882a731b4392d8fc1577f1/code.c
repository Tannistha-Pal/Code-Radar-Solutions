#include <stdio.h>
// Function to count the number of trailing zeroes in the binary representation of a number
int countTrailingZeroes(unsigned int num) {
    if (num == 0)
        return 32; // All bits are zero
    
    int count = 0;
    while ((num & 1) == 0 && count < 32) {
        num >>= 1;
        count++;
    }
    return count;
}
int main() {
    unsigned int num
    scanf("%d", &num);
    // Counting trailing zeroes
    int result = countTrailingZeroes(num);
    printf("%d\n", result);
    
    return 0;
}
