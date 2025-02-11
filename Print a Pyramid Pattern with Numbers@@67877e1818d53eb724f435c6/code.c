#include <stdio.h>

int main() {
    int N, i, j, space;
    
    // Input the number of rows
    scanf("%d", &N);

    // Loop to print the pyramid pattern
    for (i = 1; i <= N; i++) {  
        // Print leading spaces for center alignment
        for (space = 1; space <= N - i; space++) {
            printf("  ");  
        }

        // Print numbers from 1 to the row number
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to next line
    }

    return 0;
}
