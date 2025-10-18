// Leaders in an array.

#include<stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Leaders are: ");
    
    // Last element is always a leader
    int current_leader = arr[n-1];
    printf("%d ", current_leader);
    
    // Check remaining elements from right to left
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > current_leader) {
            current_leader = arr[i];
            printf("%d ", current_leader);
        }
    }
    printf("\n");

    return 0;
}
