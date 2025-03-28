#include <stdio.h>

int main() {
    int n, arr[100], count, maxCount = 0, maj = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i]) count++;

        if (count > n / 2) {
            maj = arr[i];
            break;
        }
    }
    printf("%d\n", maj);
    return 0;
}
