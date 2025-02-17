#include <stdio.h>
int main() {
    double n;  // Use double instead of float
    scanf("%f", &n);  // Use %lf for reading double
    printf("You entered: %.4f\n", n);  // Use %lf for printing double
    return 0;
}
