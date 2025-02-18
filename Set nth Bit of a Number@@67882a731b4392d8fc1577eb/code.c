#include <stdio.h>
int main() {
    unsigned int num;
    int n;
    scanf("%d", &num);
    scanf("%d", &n);
    // Setting the nth bit
    unsigned int result = num | (1 << n);
    printf("%d", result);
    
    return 0;
}

