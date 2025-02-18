#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { // Start from 1 instead of 0
        int num = (i % 2 == 1) ? 1 : 0; // Start with 1 for odd rows, 0 for even rows

        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 0 and 1
        }
        printf("\n");
    }
    return 0;
}
