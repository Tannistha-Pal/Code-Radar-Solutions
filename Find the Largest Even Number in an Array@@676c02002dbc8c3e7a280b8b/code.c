#include <stdio.h>
int main() {
    int n, num, max = -1000000; // Use a very small number instead of -1
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num % 2 == 0 && num > max) max = num;
    }
    printf("%d\n", (max == -1000000) ? -1 : max); // If no even number found, print -1
    return 0;
}
