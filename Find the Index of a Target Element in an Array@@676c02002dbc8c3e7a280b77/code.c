#include <stdio.h>

int main() {
    int n, i, t, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &t);
    for (i = 0; i < n; i++) 
        if (arr[i] == t) return printf("%d", i), 0;
    printf("-1");
}
