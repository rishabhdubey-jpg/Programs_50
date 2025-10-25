//  Find duplicate number in array.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Duplicate elements are: ");
    int found = 0;  // Flag to check if any duplicates were found
    
    // Compare each element with all other elements
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;  // Break inner loop once duplicate is found
            }
        }
    }
    
    if(!found) {
        printf("No duplicates found!");
    }
    printf("\n");
    
    return 0;
}