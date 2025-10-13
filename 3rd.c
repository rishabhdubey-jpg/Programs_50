//  Find the 'Kth' max and min element of an array.
#include<stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i< n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, k, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n ", n);
    for(i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    } 
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if(k> 0 && k <= n) {
        sort(arr, n);
        printf("%dth minimum element: %d\n", k, arr[k-1]);
        printf("%dth maximum element: %d\n", k,arr[n-k]);
    } else {
        printf("Invalid value of k.\n");
    }
    return 0;
}

