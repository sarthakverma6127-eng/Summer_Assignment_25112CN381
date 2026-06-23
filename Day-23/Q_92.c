//Write a program to Find maximum occurring charater.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0}; // Array to store character counts
    int i;
    int max_count = 0;
    char max_char = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Step 1: Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        int ascii_value = (unsigned char)str[i];
        frequency[ascii_value]++;
    }

    // Step 2: Find the character with the maximum frequency
    for (i = 0; str[i] != '\0'; i++) {
        int ascii_value = (unsigned char)str[i];
        
        if (frequency[ascii_value] > max_count) {
            max_count = frequency[ascii_value];
            max_char = str[i];
        }
    }

    // Print the result
    if (max_count > 0) {
        if (max_char == ' ') {
            printf("The maximum occurring character is: [Space] (appears %d times)\n", max_count);
        } else {
            printf("The maximum occurring character is: '%c' (appears %d times)\n", max_char, max_count);
        }
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}