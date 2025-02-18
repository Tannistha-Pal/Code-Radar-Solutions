#include <stdio.h>
int main() {
    unsigned int num;
    int binary[32]; // Array to store binary digits
    int index = 0;
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    while (num > 0) {
        binary[index++] = num & 1; // Store LSB
        num >>= 1; // Right shift number
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
