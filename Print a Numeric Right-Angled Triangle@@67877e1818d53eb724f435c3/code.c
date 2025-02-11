#include <stdio.h>
int main() {
    int N, i, j;
    // Input the number of rows
    scanf("%d", &N);
    // Loop to print the number pattern
    for (i = 1; i <= N; i++) {  // Rows
        for (j = 1; j <= i; j++) {  // Numbers from 1 to row number
            printf("%d ", j);
        }
        printf("\n");  // Newline after each row
    }
    return 0;
}
