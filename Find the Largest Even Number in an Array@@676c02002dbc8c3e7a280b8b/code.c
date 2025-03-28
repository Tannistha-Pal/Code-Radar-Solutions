#include <stdio.h>

int main() {
    int n, num, max = -1;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num % 2 == 0 && num > max) max = num;
    }

    printf("%d\n", max);
    return 0;
}
