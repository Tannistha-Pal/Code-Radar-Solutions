#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    float avg;
    avg = (a+b+c)/3;
    printf("Average: %f", avg);
    return 0;
}