#include <stdio.h>
int main() {
    double n;  // Use double instead of float
    scanf("%lf", &n);  // Use %lf for reading double
    printf("You entered: %.4lf\n", n);  // Use %lf for printing double
    return 0;
}
