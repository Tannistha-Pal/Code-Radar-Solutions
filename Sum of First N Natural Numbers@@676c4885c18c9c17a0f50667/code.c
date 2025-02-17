#include<stdio.h>
int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);  // Read input for n
    for(int i = 0; i <= n; i++) {
        sum = sum + i;  // Add each number to sum
    }
    printf("%d", sum);  // Print the final sum after the loop
    return 0;
}
