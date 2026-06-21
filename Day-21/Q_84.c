//Write a program to Convert lowercase to uppercase.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Asking for user input
    printf("Enter a string in lowercase: ");
    scanf("%99[^\n]", str);

    // Loop through the string until the null character
    while (str[i] != '\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to convert it to uppercase
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Display the uppercase string
    printf("Uppercase string: %s\n", str);

    return 0;
}