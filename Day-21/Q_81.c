//Write a program to find string length without strlen().
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Asking for user input
    printf("Enter a string: ");
    // Using %99[^\n] to safely read an entire line including spaces
    scanf("%99[^\n]", str); 

    // Loop through the string until the null character is reached
    while (str[length] != '\0') {
        length++;
    }

    // Display the result
    printf("The length of the string is: %d\n", length);

    return 0;
}