// Find Union and Intersection of two arrays.
#include<stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array: \n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array: \n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Union
    printf("Union: \n");
    for(i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for(i = 0; i < n2; i++) {
        int found = 0;
        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");

    // Intersection
    printf("Intersection: \n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d",arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}