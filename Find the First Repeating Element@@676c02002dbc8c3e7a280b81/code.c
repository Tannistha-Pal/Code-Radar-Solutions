#include <stdio.h>

int main() {
    int n, x, a[100001] = {0};
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (a[x]) return printf("%d\n", x), 0;
        a[x] = 1;
    }
    printf("-1\n");
}
