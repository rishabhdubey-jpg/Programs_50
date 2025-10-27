// Trapping Rain Water.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of bars: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int height[n];
    printf("Enter %d heights:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    long long water = 0;
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;

    while (left < right) {
        if (height[left] <= height[right]) {
            if (height[left] >= left_max) left_max = height[left];
            else water += (left_max - height[left]);
            left++;
        } else {
            if (height[right] >= right_max) right_max = height[right];
            else water += (right_max - height[right]);
            right--;
        }
    }

    printf("Trapped water = %lld\n", water);
    
    return 0;
}