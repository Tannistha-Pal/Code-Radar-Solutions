#include <stdio.h>

int main() {
    int n, x, max1 = -100000, max2 = -100000, min1 = 100000, min2 = 100000;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x > max1) max2 = max1, max1 = x;
        else if (x > max2) max2 = x;
        if (x < min1) min2 = min1, min1 = x;
        else if (x < min2) min2 = x;
    }
    printf("%d\n", (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2);
}
