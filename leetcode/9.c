// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.


#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || x > 999999999) { 
        return false;
    }

    int reversed = 0, original = x;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int number;
    printf("Son kiriting (9 raqamgacha): ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("Bu son palindrome.\n");
    } else {
        printf("Bu son palindrome emas.\n");
    }

    return 0;
}
