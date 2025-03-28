#include <stdio.h>

int main() {
    int n, k, count = 0, num;
    scanf("%d %d", &n, &k);
    
    while (n--) {
        scanf("%d", &num);
        if (num == k) count++;
    }

    printf("%d\n", count);
    return 0;
}
