#include <stdio.h>

#define MAX 1001  // Define max array size

int found[MAX] = {0}; // Declare globally to avoid stack overflow

int findMissing(int arr[], int n) {
    for (int i = 0; i < MAX; i++) // Reset found array
        found[i] = 0;
    
    for (int i = 0; i < n; i++) 
        if (arr[i] > 0 && arr[i] < MAX) 
            found[arr[i]] = 1;
    
    for (int i = 1; i < MAX; i++) 
        if (!found[i]) 
            return i;
    
    return 1; 
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n]; // Declare array after getting size
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    printf("%d\n", findMissing(arr, n));
    return 0;
}
