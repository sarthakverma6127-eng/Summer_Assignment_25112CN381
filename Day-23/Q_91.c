//Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int frequency[256] = {0}; // Array to track character balances
    int i, is_anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        is_anagram = 0;
    } else {
        // Count frequencies of the first string
        for (i = 0; str1[i] != '\0'; i++) {
            frequency[(unsigned char)str1[i]]++;
        }

        // Subtract frequencies using the second string
        for (i = 0; str2[i] != '\0'; i++) {
            frequency[(unsigned char)str2[i]]--;
        }

        // If it's an anagram, all positions in the frequency array must be 0
        for (i = 0; i < 256; i++) {
            if (frequency[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
    }

    // Print the result
    if (is_anagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}