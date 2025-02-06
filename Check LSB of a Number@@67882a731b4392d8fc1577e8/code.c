#include <stdio.h>
int main() {
    int num;
    
    // Taking user input
    scanf("%d", &num);
    
    // Checking the LSB using bitwise AND with 1
    if (num & 1)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
