#include <stdio.h>

int findMissing(int arr[], int n) {
    int found[1001] = {0};  
    for (int i = 0; i < n; i++) 
        if (arr[i] > 0) 
            found[arr[i]] = 1;
    
    for (int i = 1; i <= 1000; i++) 
        if (!found[i]) 
            return i;
    
    return 1; 
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    printf("%d\n", findMissing(arr, n));
    return 0;
}
