#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        int sum = 0, num = x < 0 ? -x : x; // Take absolute value for digit sum
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        printf("%d ", x < 0 ? -sum : sum); // Restore original sign
    }
}
