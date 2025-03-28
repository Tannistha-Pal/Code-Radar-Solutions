#include <stdio.h>

// Function to find the smallest subarray that needs sorting
int findUnsortedSubarray(int arr[], int n) {
    int start = 0, end = n - 1;

    // Find left boundary
    while (start < n - 1 && arr[start] <= arr[start + 1])
        start++;

    // If array is already sorted
    if (start == n - 1)
        return 0;

    // Find right boundary
    while (end > 0 && arr[end] >= arr[end - 1])
        end--;

    return (end - start + 1);
}

int main() {
    int T, n;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        printf("%d\n", findUnsortedSubarray(arr, n));
    }

    return 0;
}
