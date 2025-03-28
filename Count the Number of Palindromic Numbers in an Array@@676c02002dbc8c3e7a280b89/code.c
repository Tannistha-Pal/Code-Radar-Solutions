#include <stdio.h>

int main() {
    int n, num, rev, temp, count = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        temp = num, rev = 0;
        while (temp) rev = rev * 10 + temp % 10, temp /= 10;
        if (rev == num) count++;
    }

    printf("%d\n", count);
    return 0;
}
