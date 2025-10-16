//  Maximum Subarray Sum.

#include <stdio.h>
#include <limits.h> // Required for INT_MIN, a way to handle arrays with all negative numbers.

// Function to find the max contiguous subarray sum
int maxSubArraySum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    // Initialize global_max and current_max
    int global_max = INT_MIN;
    int current_max = 0;

    for (int i = 0; i < size; i++) {
        // Add the current element to current_max
        current_max = current_max + arr[i];

        // Update the overall maximum (global_max) if needed
        if (current_max > global_max) {
            global_max = current_max;
        }

        // Decide whether to reset the current subarray
        /* If current_max becomes negative, it's better to start a new subarray
        from the next element. A negative sum will only decrease the total.*/
        if (current_max < 0) {
            current_max = 0;
        }
    }

    return global_max;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculating the size of array

    int max_sum = maxSubArraySum(arr, n);

    printf("The maximum subarray sum is: %d\n", max_sum); 

    return 0;
}

