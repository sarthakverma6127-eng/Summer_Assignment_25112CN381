//Write a program to Count words in a sentence.
#include <stdio.h>

int main() {
    char str[] = "Count the number of words in this sentence.";
    int i = 0;
    int wordCount = 0;
    int inWord = 0; // Acts as a flag (0 = outside a word, 1 = inside a word)

    while (str[i] != '\0') {
        // If the current character is a space, tab, or newline
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0; // We are no longer inside a word
        } 
        // If the character is not a space and we weren't already in a word
        else if (inWord == 0) {
            inWord = 1;   // We found the start of a new word
            wordCount++;  // Increment the word count
        }
        
        i++; // Move to the next character
    }

    printf("Sentence: \"%s\"\n", str);
    printf("Total number of words: %d\n", wordCount);

    return 0;
}