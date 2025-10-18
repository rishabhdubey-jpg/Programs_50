// Check if array is sorted and rotated.
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d",&n) != 1 || n <=0)  // It will not read exactly one integer (!= 1) or if the num entered is -ve (n <= 0).
    return 0;

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (int i=0; i<n; i++) {
        if (scanf("%d", &arr[i]) !=1)
        return 0;
    }
    // An array with 0 or 1 element is always considered sorted, but it cannot be "rotated" in any meaningful way.
    if (n<2) {
        printf("Array is sorted but not rotated (too small to rotate).\n");
        return 0;
    }

    int drops = 0; // Counts how many times a number is followed by a smaller number.
    int drop_index = -1; // It will stores the position of the element just before the drop.
    for (int i=0; i<n; i++) {
        if (arr[i] > arr[(i+1) % n]) {  // To handle the wrap-around condition.
            drops++;
            drop_index = i;
        }
    }

    // Every element was less than or equal to the next one.
    if (drops == 0) {
        printf("Array is sorted (not rotated).\n");
    }

    // Exactly one drop was found.    
     else if (drops == 1) {
        printf("Array is a rotated sorted array. Rotation pivot at index %d (element %d).\n",
            (drop_index + 1) % n, arr[(drop_index + 1) % n]);
    }

    // If there are two or more drops, the array is not sorted in any way.
     else {
        printf("Array is not a rotated sorted array.\n");
    }

    return 0;
}
