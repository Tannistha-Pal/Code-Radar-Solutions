#include <stdio.h>

int main() {
    int N, i, j;
    // Input the number of rows
    scanf("%d", &N);

    // Loop to print the pattern
    for (i = 1; i <= N; i++) {  // Rows
        for (j = i; j >= 1; j--) {  // Numbers from row number to 1
            printf("%d ", j);
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}
