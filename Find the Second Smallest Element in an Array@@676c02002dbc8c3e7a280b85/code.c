#include <stdio.h>

int main() {
    int n, i, min, second_min;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    min = second_min = __INT_MAX__;
    for (i = 0; i < n; i++) {
        if (a[i] < min) {
            second_min = min;
            min = a[i];
        } else if (a[i] > min && a[i] < second_min) {
            second_min = a[i];
        }
    }
    printf("%d", second_min == __INT_MAX__ ? -1 : second_min);
}
