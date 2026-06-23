//Write a program to check palindrome string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "racecar";
    int left = 0;
    int right = strlen(str) - 1;
    
    // Use an int flag: 1 means true (is a palindrome)
    int isPalindrome = 1; 

    // Compare characters from both ends moving inward
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; // Set to 0 (false) if a mismatch is found
            break; 
        }
        left++;  
        right--; 
    }

    // Check the integer flag for the result
    if (isPalindrome == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}