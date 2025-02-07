#include <stdio.h>
// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    }
    return 0; // Not a leap year
}
int main() {
    int year;
    scanf("%d", &year);
    
    // Checking for leap year
    if (isLeapYear(year)) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
    return 0;
}