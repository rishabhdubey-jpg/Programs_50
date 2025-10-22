//  Count the number of occurrences of an element.
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

    printf("Enter element to count: ");
    scanf("%d", &target);

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }

    printf("Number of occurrences of %d: %d\n", target, count);
    return 0;
}