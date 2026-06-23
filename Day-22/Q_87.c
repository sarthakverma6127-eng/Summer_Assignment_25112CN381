//Write a program to Character frequency. 
#include <stdio.h>
#include <string.h>

int main() {
    // Using fixed sizes directly instead of #define macros
    char str[100];
    int frequency[256] = {0}; // 256 covers all standard and extended ASCII characters
    int i;

    printf("Enter any string: ");
    // Reads string including spaces until a newline is encountered
    fgets(str, sizeof(str), stdin); 

    // Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Count the frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        int ascii_value = (unsigned char)str[i]; 
        frequency[ascii_value]++;
    }

    // Print the results
    printf("\nCharacter frequencies:\n");
    printf("---------------------\n");
    for(i = 0; i < 256; i++) {
        if(frequency[i] > 0) {
            if(i == ' ') {
                printf("[Space] : %d\n", frequency[i]);
            } else {
                printf("'%c'     : %d\n", i, frequency[i]);
            }
        }
    }

    return 0;
}