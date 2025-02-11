#include <stdio.h>
int main() {
    int N, i, j;
    // Input the number of rows
    scanf("%d", &N);
    // Loop to print the reverse numeric triangle
    for (i = N; i >= 1; i--) {  // Rows start from N down to 1
        for (j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}

