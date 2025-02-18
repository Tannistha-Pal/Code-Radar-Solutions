#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // Input for n
    for(int i = 1; i <= 10; i++) {  // Correct loop syntax
        printf("%d x %d = %d\n", n, i, n*i);  // Print the multiplication table with a new line after each output
    }
    return 0;
}
