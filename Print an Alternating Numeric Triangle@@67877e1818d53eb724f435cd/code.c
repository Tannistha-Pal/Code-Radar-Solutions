#include <stdio.h>
int main() {
    int n;
    // Get the number of rows from the user
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        int num = i % 2; // Start with 0 for even rows, 1 for odd rows

        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 0 and 1
        }
        printf("\n");
    }

    return 0;
}
