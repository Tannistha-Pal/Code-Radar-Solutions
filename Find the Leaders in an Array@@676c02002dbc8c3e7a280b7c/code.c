#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_right = arr[n - 1];  
    printf("%d ", max_right);  

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            printf("%d ", max_right);
        }
    }

    return 0;
}
