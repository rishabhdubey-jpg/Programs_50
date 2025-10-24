// Missing number in array [1 to n].
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in array: \n");
    scanf("%d",&n);

    int arr[n];
     printf("Enter %d elements:\n",n);
    for(int i = 0; i < n-1; i++) {     // n-1 because one number is missing in the array.
        scanf("%d",&arr[i]);
    }

    // Calculate expected sum of numbers from 1 to n.
    int expected_sum = (n * (n + 1)) / 2;
    
    // Calculate actual sum of array.
    int actual_sum = 0;
    for(int i = 0; i < n-1; i++) {
        actual_sum += arr[i];
    }
    
    // Missing number is the difference.
    int missing_number = expected_sum - actual_sum;
    
    printf("The missing number is: %d\n", missing_number);
     
    return 0;
}