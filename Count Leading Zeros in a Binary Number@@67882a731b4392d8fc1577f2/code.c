#include <stdio.h>
// Function to count the number of leading zeroes in a 32-bit number
int countLeadingZeroes(unsigned int num) {
    if (num == 0)
        return 32; // All bits are zero
    
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }
    return count;
}
int main() {
    unsigned int num;
    scanf("%u", &num);
    // Counting leading zeroes
    int result = countLeadingZeroes(num);
    printf("%d\n", result);
    
    return 0;
}