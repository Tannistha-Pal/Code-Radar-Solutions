#include <stdio.h>

int main() {
    int n, i, maxLen = 1, curLen = 1;
    scanf("%d", &n);
    int arr[n], found[1000] = {0};  

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        found[arr[i]] = 1;  
    }

    for (i = 0; i < 1000; i++) {
        if (found[i] && found[i - 1]) curLen++;
        else curLen = 1;
        if (curLen > maxLen) maxLen = curLen;
    }
    
    printf("%d", maxLen);
}
