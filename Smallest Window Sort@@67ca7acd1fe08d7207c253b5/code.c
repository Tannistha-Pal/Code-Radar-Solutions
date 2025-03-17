#include <stdio.h>

// Function to find the smallest subarray length that needs to be sorted
int findUnsortedSubarrayLength(int arr[], int n) {
    int start = -1, end = -1;
    
    // Step 1: Find the first out-of-order element from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If no such element is found, array is already sorted
    if (start == -1) return 0;

    // Step 2: Find the first out-of-order element from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Step 3: Find min and max in the subarray arr[start] to arr[end]
    int minVal = arr[start], maxVal = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Step 4: Expand start and end boundaries
    while (start > 0 && arr[start - 1] > minVal) start--;
    while (end < n - 1 && arr[end + 1] < maxVal) end++;

    // Step 5: Return the length of the subarray
    return (end - start + 1);
}

int main() {
    int T;
    
    // Read number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;
        
        // Read size of array
        scanf("%d", &N);
        
        int arr[N];
        
        // Read array elements
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        
        // Compute and print the result
        printf("%d\n", findUnsortedSubarrayLength(arr, N));
    }
    
    return 0;
}
