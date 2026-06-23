//Write a program to Find first non-repeating character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0}; // Array to store character counts
    int i;
    char result = '\0'; // Variable to store the first non-repeating character

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Step 1: Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        int ascii_value = (unsigned char)str[i];
        frequency[ascii_value]++;
    }

    // Step 2: Find the first character with a frequency of 1
    for (i = 0; str[i] != '\0'; i++) {
        int ascii_value = (unsigned char)str[i];
        if (frequency[ascii_value] == 1) {
            result = str[i];
            break; // Stop at the very first one we find
        }
    }

    // Print the result
    if (result != '\0') {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("All characters are repeating or the string is empty.\n");
    }

    return 0;
}