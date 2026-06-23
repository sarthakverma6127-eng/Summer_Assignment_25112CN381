//Write a program to Remove spaces from string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    // Reads a line of text including spaces
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        // If the current character is not a space, keep it
        if (str[i] != ' ') {
            str[j] = str[i];
            j++; // Move to the next position for the clean string
        }
    }
    // Add the null terminator to mark the new end of the string
    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);

    return 0;
}