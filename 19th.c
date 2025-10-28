// Merge two sorted arrays without using extra space.

#include <stdio.h>

// Utility function to swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to calculate the next gap size, equivalent to ceil(gap/2)
int nextGap(int gap) {
    if (gap <= 1) {
        return 0;
    }
    return (gap / 2) + (gap % 2);
}

// Function to merge arrays using the Gap method
void mergeGap(int arr1[], int arr2[], int n, int m) {
    int i, j, gap = n + m;

    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        // Comparing elements within the first array
        for (i = 0; i + gap < n; i++) {
            if (arr1[i] > arr1[i + gap]) {
                swap(&arr1[i], &arr1[i + gap]);
            }
        }

        // Comparing elements between the first and second arrays
        for (j = (gap > n) ? (gap - n) : 0; i < n && j < m; i++, j++) {
            if (arr1[i] > arr2[j]) {
                swap(&arr1[i], &arr2[j]);
            }
        }

        // Comparing elements within the second array
        if (j < m) {
            for (j = 0; j + gap < m; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    swap(&arr2[j], &arr2[j + gap]);
                }
            }
        }
    }
}

// A function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
   
int main(){
    int arr1[] = {1, 4, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    printf("Original Arrays:\n");
    printf("arr1: ");
    printArray(arr1, n);
    printf("arr2: ");
    printArray(arr2, m);

    mergeGap(arr1, arr2, n, m);

    printf("\nMerged and Sorted Arrays:\n");
    printf("arr1: "); 
    printArray(arr1, n);
    printf("arr2: "); 
    printArray(arr2, m);

    return 0;
}