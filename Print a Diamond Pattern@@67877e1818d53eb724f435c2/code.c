#include <stdio.h>
int main() {
    int N, i, j, space;
    // Input the number of rows for the top half
    scanf("%d", &N);
    // Print the upper half of the diamond (including middle row)
    for (i = 1; i <= N; i++) {
        // Print spaces for centering
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Print the lower half of the diamond (N-1 rows)
    for (i = N - 1; i >= 1; i--) {
        // Print spaces for centering
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
