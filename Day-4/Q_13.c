//Write a program to Generate Fibonacci series.
#include <stdio.h>

void generate_fibonacci(int terms) {
    if (terms <= 0) {
        printf("Please enter a number of terms greater than 0.\n");
        return;
    }

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long next;

    printf("Fibonacci Series up to %d terms:\n", terms);

    for (int i = 1; i <= terms; i++) {
        // Print the current term
        printf("%llu ", a);

        // Calculate the next term
        next = a + b;
        a = b;       // Shift 'b' to 'a'
        b = next;    // Shift 'next' to 'b'
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms to generate: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    generate_fibonacci(terms);

    return 0;
}