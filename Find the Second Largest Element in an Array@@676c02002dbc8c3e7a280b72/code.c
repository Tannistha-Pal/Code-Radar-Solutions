#include <stdio.h>
#include <limits.h>

int main() {
    int n, num, max = INT_MIN, secondMax = INT_MIN;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax && num < max) {
            secondMax = num;
        }
    }

    // If secondMax was never updated, print -1
    printf("%d\n", (secondMax == INT_MIN) ? -1 : secondMax);
    
    return 0;
}
