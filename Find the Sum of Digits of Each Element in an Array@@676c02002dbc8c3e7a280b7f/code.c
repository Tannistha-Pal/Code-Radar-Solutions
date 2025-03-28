#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, num;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &num);
        int sum = 0;
        num = abs(num);  
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        printf("%d ", sum);
    }
    
    return 0;
}
