// Subarray with given sum (Two pointer / Sliding window.
#include<stdio.h>

int main() {
    int n, target_sum;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d",&target_sum);

    int start = 0, current_sum = 0;
    int found = 0;

    // Sliding window approach
    for(int end = 0; end < n; end++) {
        current_sum += arr[end];

    // Shrink window if sum becomes too large
    while(current_sum > target_sum && start < end) {
        current_sum -= arr[start];
    }    

    // Check if we found the target sum
    if(current_sum == target_sum) {
        printf("Subarray found from index %d to %d\n", start, end);
        printf("Elements: ");
        for(int i = start; i <= end; i++) {
            printf("%d", arr[i]);            
        }
        printf("\n");
        found = 1;
        break;
    }
    }

    if(!found) {
        printf("No subarray found with sum %d\n", target_sum);
    }

    return 0;
}