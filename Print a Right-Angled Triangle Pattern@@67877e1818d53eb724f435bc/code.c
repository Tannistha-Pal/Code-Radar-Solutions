#include <stdio.h>
int main() {
    int N, i, j;
    scanf("%d", &N);

    // Loop to print the pattern
    for (i = 1; i < N; i++) {  // Rows (starting from N down to 1)
        for (j = 1; j <= i; j++) {  // Columns (printing i stars)
            printf("* ");
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
