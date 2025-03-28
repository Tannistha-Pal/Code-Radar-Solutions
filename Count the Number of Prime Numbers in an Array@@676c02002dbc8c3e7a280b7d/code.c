#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n, x, count = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        count += isPrime(x);
    }
    printf("%d\n", count);
}
