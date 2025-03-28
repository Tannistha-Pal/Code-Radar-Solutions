#include <stdio.h>

int main() {
    int n, even = 0, odd = 0, num;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) even++;
        else odd++;
    }
    
    printf("%d %d\n", even, odd);
    return 0;
}
