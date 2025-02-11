#include <stdio.h>
int main() {
    int rows;
    // Get the number of rows from the user
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        char ch = 'A';
        for (int j = 0; j < (rows - i); j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    return 0;
}
