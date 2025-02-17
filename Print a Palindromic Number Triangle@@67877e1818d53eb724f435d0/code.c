#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf(" %d ", j);
        }
        // Print decreasing numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); // New line for the next row
    }
    return 0;
}

