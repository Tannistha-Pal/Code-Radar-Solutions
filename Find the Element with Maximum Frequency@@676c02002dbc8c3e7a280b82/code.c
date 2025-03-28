#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], freq[1001] = {0}; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;  
    }

    int max_freq = 0, result = 1001;
    for (int i = 0; i < 1001; i++) {
        if (freq[i] > max_freq || (freq[i] == max_freq && i < result)) {
            max_freq = freq[i];
            result = i;
        }
    }

    printf("%d", result);
    return 0;
}

