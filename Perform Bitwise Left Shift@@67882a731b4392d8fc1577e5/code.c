#include <stdio.h>

#include <stdio.h>

int main() {
    int num, shift;
    
    // Taking user input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Enter number of positions to shift left: ");
    scanf("%d", &shift);
    
    // Left shift operation
    int result = num << shift;
    
    // Displaying the result
    printf("Result after left shifting %d by %d positions: %d\n", num, shift, result);
    
    return 0;
}
