// Find intersection of two sorted arrays.

#include <stdio.h>
#include <limits.h>

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    if (scanf("%d", &m) != 1 || m < 0) {
      printf("Invalid size\n");
      return 1; }
      
    int a[m];
    if (m > 0) {
        printf("Enter %d elements (sorted):\n", m);
        for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    if (scanf("%d", &n) != 1 || n < 0) {
         printf("Invalid size\n");
         return 1;
     }

    int b[n];
    if (n > 0) {
        printf("Enter %d elements (sorted):\n", n);
        for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;
    int last = INT_MIN;
    int found = 0;
    printf("Intersection: ");
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {                     // equal
            if (a[i] != last) {
                printf("%d ", a[i]);
                last = a[i];
                found = 1;
            }
            int val = a[i];
            while (i < m && a[i] == val) i++;
            while (j < n && b[j] == val) j++;
        }
    }

    if (!found)
    printf("No common elements");
    printf("\n");
    
    return 0;
}
