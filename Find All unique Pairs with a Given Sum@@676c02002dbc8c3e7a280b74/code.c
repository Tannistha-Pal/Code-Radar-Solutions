#include <stdio.h>

int main() {
    int n, t, i, j;
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &t); // Read target sum
    
    // Find and print unique pairs
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
