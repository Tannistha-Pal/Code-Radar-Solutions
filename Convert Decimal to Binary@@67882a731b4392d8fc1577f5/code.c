#include <stdio.h>
// Function to convert a decimal number to binary using bitwise operations
void decimalToBinary(unsigned int num) {
    int binary[32]; // Array to store binary digits
    int index = 0;
    if (num == 0) {
        printf("0");
        return;
    }
    while (num > 0) {
        binary[index++] = num & 1; // Store LSB
        num >>= 1; // Right shift number
    }
    // Print binary in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
int main() {
    unsigned int num;
    scanf("%d", &num);
    // Convert and display binary representation
    decimalToBinary(num);
    printf("\n");
    
    return 0;
}
