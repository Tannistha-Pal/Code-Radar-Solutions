#include <stdio.h>

void rotateLeft(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void rotateRight(int arr[], int n) {
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d, choice;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &d);
    scanf("%d", &choice);
    
    for (int i = 0; i < d; i++) {
        if (choice == 1) {
            rotateLeft(arr, n);
        } else if (choice == 2) {
            rotateRight(arr, n);
        } else {
            printf("Invalid choice!\n");
            return 1;
        }
    }
    
    printf("Rotated array: ");
    printArray(arr, n);
    return 0;
}
