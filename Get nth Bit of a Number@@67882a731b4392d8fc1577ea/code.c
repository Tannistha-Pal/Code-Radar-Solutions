#include <stdio.h>
int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Right shift and bitwise AND with 1
}
int main() {
    int num, n, bit;
// Taking user input
    scanf("%d", &num);
    scanf("%d", &n);
// Get the Nth bit
    bit = getNthBit(num, n);
// Displaying the result
    printf("%d", bit);
    return 0;
}
