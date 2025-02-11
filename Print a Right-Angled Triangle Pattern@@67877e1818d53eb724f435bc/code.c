#include <stdio.h>
int main() {
    int N, i, j;
    scanf("%d", &N);

    // Loop to print the pattern
    for (i = N; i > 0; i++) {  // Rows (starting from N down to 1)
        for (j = 0; j < i; j++) {  // Columns (printing i stars)
            printf("* ");
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
