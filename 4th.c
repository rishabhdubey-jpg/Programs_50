// Sort an array of 0s, 1s and 2s.
#include<stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements  (only 0, 1, or 2): \n", n);
    for(i = 0; i< n; i++) {
        scanf("%d", &arr[i]);
    }

    int count0 = 0, count1 = 0, count2 = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else if(arr[i] == 2) count2++;
    }

    for(i = 0; i < count0; i++) 
    arr[i] = 0;
    for(; i < count0 + count1; i++) 
    arr[i] = 1;
    for(; i < n; i++)
    arr[i] = 2;
    printf("Sorted array: \n");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
