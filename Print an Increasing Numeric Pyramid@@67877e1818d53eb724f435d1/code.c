#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for centering
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}





