#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char Word;
    scanf("%c", &Word);
    printf("You enetered: %c", Word);
    return 0;
}