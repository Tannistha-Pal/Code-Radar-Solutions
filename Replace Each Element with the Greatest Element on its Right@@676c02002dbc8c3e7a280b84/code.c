#include <stdio.h>

int main() {
    int n, i, max = -1;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = n - 1; i >= 0; i--) {
        int temp = a[i];
        a[i] = max;
        if (temp > max) max = temp;
    }

    for (i = 0; i < n; i++) printf("%d ", a[i]);
}
