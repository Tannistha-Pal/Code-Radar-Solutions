#include<stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);
    int num = 1; // Starting number
    for (int i = 1; i <= rows; i++) { // Corrected variable name from 'n' to 'rows'
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}

