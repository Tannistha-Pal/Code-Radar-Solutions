#include <stdio.h>

int main() {
    int n, arr[100], j = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        if (arr[i] != 0) arr[j++] = arr[i];

    while (j < n) arr[j++] = 0;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}
