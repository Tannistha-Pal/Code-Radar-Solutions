#include <stdio.h>
int main() {
    int N, i, j, space;
    // Input the number of rows
    scanf("%d", &N);
    // Loop to print the pyramid
    for (i = 1; i <= N; i++) {  // Rows from 1 to N
        // Print spaces for alignment
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        // Print stars in pyramid pattern
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");  // Newline after each row
    }
    return 0;
}
