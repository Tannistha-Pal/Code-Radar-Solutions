#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Checking for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year"); // Leap year
    } else {
        printf("Not a Leap Year");
    }

    return 0;
}
