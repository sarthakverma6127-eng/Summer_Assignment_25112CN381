//Write a program to Count vowels and consonants.
#include <stdio.h>
#include <ctype.h> // Included for isalpha() and tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    // Asking for user input
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if the character is an alphabet letter
        if (isalpha(ch)) {
            // Convert to lowercase to handle both upper/lower case easily
            ch = tolower(ch);

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it's an alphabet and not a vowel, it's a consonant
                consonants++;
            }
        }
        i++;
    }

    // Display the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}