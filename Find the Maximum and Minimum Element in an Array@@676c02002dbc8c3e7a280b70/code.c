#include <stdio.h>

int main() {
    int n, min, max;
    scanf("%d", &n);
    int arr[n];
    
    scanf("%d", &arr[0]);
    min = max = arr[0];
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    printf("%d %d\n", min, max);
    return 0;
}
