#include <stdio.h>
// Function to find the position of the lowest set bit (1) in a number
int lowestSetBitPosition(unsigned int num) {
    if (num == 0)
        return -1; // No set bit found
    
    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    // Finding the lowest set bit position
    int result = lowestSetBitPosition(num);
    if (result == -1)
        printf("0");
    else
        printf("%d", result);
    
    return 0;
}