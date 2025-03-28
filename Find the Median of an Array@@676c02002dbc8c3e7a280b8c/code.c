#include <stdio.h>
int main() {
    int n, i, j, temp;
    scanf("%d", &n);
    int arr[n];
    // Read the array
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Sort the array (Bubble Sort)
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    // Find and print the median
    if (n % 2 == 1)
        printf("%d\n", arr[n / 2]);
    else
        printf("%f\n", (arr[n / 2 - 1] + arr[n / 2]) / 2.0);

    return 0;
}
