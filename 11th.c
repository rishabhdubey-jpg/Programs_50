//  Rearrange array in alternating positive & negative items.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    int pos[n], neg[n];
    int pc = 0, nc = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) neg[nc++] = arr[i];
        else pos[pc++] = arr[i];
    }

    int i = 0, p = 0, q = 0;
    // Start with negative if any negatives exist, otherwise start with positive
    int placePos = (nc == 0) ? 1 : 0; // 0 -> place negative, 1 -> place positive

    while (p < pc && q < nc) {
        if (placePos) {
            arr[i++] = pos[p++];
            placePos = 0;
        } else {
            arr[i++] = neg[q++];
            placePos = 1;
        }
    }

    while (q < nc) arr[i++] = neg[q++];
    while (p < pc) arr[i++] = pos[p++];

    printf("Rearranged array:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}
