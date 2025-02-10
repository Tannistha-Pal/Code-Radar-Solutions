#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    
    // Taking input in the required format
    scanf("%d %d %c", &num1, &num2, &operator);
    
    // Performing the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Error\n");
    }
    
    return 0;
}

