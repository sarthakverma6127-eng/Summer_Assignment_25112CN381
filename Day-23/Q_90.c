//Write a program to Find first repeating character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[256] = {0}; // Array to keep track of characters we've already met
    int i;
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Loop through the string from left to right
    for (i = 0; str[i] != '\0'; i++) {
        int ascii_value = (unsigned char)str[i];

        // If we have seen this character before, it's our first duplicate!
        if (seen[ascii_value] == 1) {
            result = str[i];
            break; // Stop immediately
        }

        // Mark the character as seen
        seen[ascii_value] = 1;
    }

    // Print the result
    if (result != '\0') {
        printf("The first repeating character is: '%c'\n", result);
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}