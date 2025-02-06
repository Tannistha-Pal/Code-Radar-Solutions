#include <stdio.h>
int main() {
    int num, msb;
    int bits = sizeof(int) * 8; // Get the number of bits in an integer
 // Taking user input
    scanf("%d", &num);
// Find the MSB by shifting the number to the rightmost position
    msb = (num >> (bits - 1)) & 1;
// Checking if MSB is set
    if (msb)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
