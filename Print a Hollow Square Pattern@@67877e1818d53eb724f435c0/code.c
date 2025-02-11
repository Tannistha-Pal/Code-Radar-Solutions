#include <stdio.h>

int main() {
    int N, i, j;

    // Input the side length of the square
    scanf("%d", &N);

    // Loop to print the hollow square
    for (i = 1; i <= N; i++) {  // Rows
        for (j = 1; j <= N; j++) {  // Columns
            // Print '*' for first row, last row, first column, or last column
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("* ");
            } else {
                printf("  ");  // Print space inside the square
            }
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
