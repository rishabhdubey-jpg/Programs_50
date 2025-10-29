// Maximum Product Subarray

#include<stdio.h>

int main(){
     int n, a[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int maxProduct = a[0];
    int minProduct = a[0];
    int result = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < 0)
        {
            int temp = maxProduct;
            maxProduct = minProduct;
            minProduct = temp;
        }
        if (a[i] > maxProduct * a[i])
            maxProduct = a[i];
        else
            maxProduct = maxProduct * a[i];

        if (a[i] < minProduct * a[i])
            minProduct = a[i];
        else
            minProduct = minProduct * a[i];

        if (maxProduct > result)
            result = maxProduct;
    }
    printf("Maximum product subarray is: %d\n", result);
    
    return 0;
}