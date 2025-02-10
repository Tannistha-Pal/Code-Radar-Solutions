#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(pow(a,b)) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}