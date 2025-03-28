#include <stdio.h>

int main() {
    int n, t, arr[100];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &t);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                // Ensure unique pairs are printed only once
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                    break;  // Stop printing duplicate pairs
                }
            }
        }
    }

    return 0;
}
