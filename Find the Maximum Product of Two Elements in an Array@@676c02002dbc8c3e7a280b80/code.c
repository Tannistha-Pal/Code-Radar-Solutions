#include <stdio.h>

int main() {
    int n, num, max1 = -100000, max2 = -100000;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }
    printf("%d\n", max1 * max2);
    return 0;
}
