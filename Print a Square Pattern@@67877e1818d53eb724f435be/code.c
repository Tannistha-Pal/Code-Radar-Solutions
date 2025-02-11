#include <stdio.h>

int main() {
    int N, i, j;

    // Input the number of rows (and columns)
    scanf("%d", &N);

    // Loop to print the square
    for (i = 1; i <= N; i++) {  // Rows
        for (j = 1; j <= N; j++) {  // Columns
            printf("* ");
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
