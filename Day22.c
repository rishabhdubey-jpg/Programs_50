// Check for palindrome

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1; // Assuming that, it is a palindrome initially..

    printf("Enter a string: ");
    gets(str); 

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Mismatch found
            break;
        }
    }

    if (isPalindrome)   // If it is a palindrome isPalindrome remains 1.
        printf("'%s' is a palindrome.\n", str);
    else
        printf("'%s' is not a palindrome.\n", str);

    return 0;
}