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
                // Print only the first occurrence of a pair
                if (i == 0 || arr[i] != arr[i - 1]) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }
    return 0;
}
