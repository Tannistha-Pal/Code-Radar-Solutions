#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int leaders[n], index = 0;  
    int max_right = arr[n - 1];

    leaders[index++] = max_right; 

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            leaders[index++] = max_right;
        }
    }

    // Printing leaders in correct order
    for (int i = index - 1; i >= 0; i--)
        printf("%d ", leaders[i]);

    return 0;
}
