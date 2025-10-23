// Find all pairs with a given sum.
#include <stdio.h>

int main() {
     int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d are:\n", target);
    int found = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if(!found) {
        printf("No pairs found with sum %d\n", target);
    }

    return 0;
}