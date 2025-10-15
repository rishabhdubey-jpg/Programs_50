// Cyclically rotate an array by one.
#include <stdio.h>

void rbyone(int arr[], int n) {
    int last = arr[n - 1];  // Store the last element

    // Shift all elements to the right by one
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;  // Moving last elemnt to first
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    rbyone(arr, n);

    printf("Array after rotation:\n");
    printArray(arr, n);

    return 0;
}
