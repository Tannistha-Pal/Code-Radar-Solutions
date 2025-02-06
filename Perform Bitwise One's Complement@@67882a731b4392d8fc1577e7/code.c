#include <stdio.h>
int main() {
    int num, complement;
    // Taking user input
    scanf("%d", &num);
    
    // One's complement operation
    complement = ~num;
    
    // Displaying the result
    printf("%d", complement);
    
    return 0;
}
