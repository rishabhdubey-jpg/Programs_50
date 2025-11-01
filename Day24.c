// Print all permutations of a string.

#include <stdio.h>
#include <string.h>

// Swapping function of two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// A recursive function to generate permutations
void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            // swap the current index with the starting index
            swap((str + l), (str + i));

            // recursively call permute for the remaining characters
            permute(str, l + 1, r);

            // Restore the original string
            swap((str + l), (str + i));
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);
    return 0;
}
