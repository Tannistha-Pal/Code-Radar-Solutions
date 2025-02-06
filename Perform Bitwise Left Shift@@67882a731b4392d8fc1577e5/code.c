#include <stdio.h>
int main() {
    int num, shift;
    // Taking user input
    scanf("%d", &num);
    scanf("%d", &shift);
    
    // Left shift operation
    int result = num << shift;
    
    // Displaying the result
    printf("%d",result);
    return 0;
}
