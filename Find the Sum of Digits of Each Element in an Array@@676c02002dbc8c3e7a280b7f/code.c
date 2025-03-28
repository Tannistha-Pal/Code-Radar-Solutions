#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        int sum = 0;
        while (x) {
            sum += x % 10;
            x /= 10;
        }
        printf("%d ", sum);
    }
}
