#include <stdio.h>
// Function to set the nth bit of a number to 1
unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n);
}
int main() {
    unsigned int num;
    int n;
    scanf("%d", &num);
    scanf("%d", &n);
    // Setting the nth bit
    unsigned int result = setNthBit(num, n);
    printf("%d", result);
    
    return 0;
}
