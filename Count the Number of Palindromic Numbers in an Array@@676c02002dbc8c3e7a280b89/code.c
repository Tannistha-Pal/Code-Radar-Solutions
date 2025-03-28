#include <stdio.h>

int isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) count++;
    }

    printf("%d\n", count);
    return 0;
}
