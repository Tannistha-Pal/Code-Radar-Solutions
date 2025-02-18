#include <stdio.h>
int main() {
    int N, i, j;
    // Input the number of rows
    scanf("%d", &N);
    // Loop to print the alphabetic right-angled triangle
    for (i = 0; i < N; i++) {  // Row loop
        for (j = 0; j <= i; j++) {  // Column loop
            printf("%c ", 'A' + j);  // Print character from 'A'
        }
        printf("\n");  // Newline after each row
    }
    return 0;
}
