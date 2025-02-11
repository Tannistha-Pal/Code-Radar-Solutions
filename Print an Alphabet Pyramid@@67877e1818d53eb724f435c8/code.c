#include <stdio.h>
int main() {
    int i, j, k, rows;
    char ch;
    // Get the number of rows from the user
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (k = rows; k > i; k--) {
            printf(" ");
        }
        ch = 'A'; // Start with 'A' for each row
        // Print increasing sequence of alphabets
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
            if (j < i)
                ch++; // Increment character
            else
                ch--; // Decrement character
        }
        printf("\n");
    }

    return 0;
}
