#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) { // Print space between numbers but not at the end
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}





