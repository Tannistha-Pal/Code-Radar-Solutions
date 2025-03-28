#include <stdio.h>

int main() {
    int n, x, a[100001] = {0}, maxFreq = 0, minVal = 100001;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &x);
        a[x]++;
        if (a[x] > maxFreq || (a[x] == maxFreq && x < minVal)) {
            maxFreq = a[x];
            minVal = x;
        }
    }
    
    printf("%d\n", minVal);
}
