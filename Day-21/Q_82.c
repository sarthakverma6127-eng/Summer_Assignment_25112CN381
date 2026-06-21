//Write a program to Reverse a string. 
#include <stdio.h>

int main() {
    char str[100];
    char temp;
    int length = 0;
    int start, end;

    // Asking for user input
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Reads string with spaces

    // Step 1: Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Step 2: Initialize pointers for swapping
    start = 0;
    end = length - 1;

    // Step 3: Swap characters from both ends moving inward
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}