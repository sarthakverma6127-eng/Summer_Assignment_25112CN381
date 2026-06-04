//Write a program to Find nth Fibonacci term.
#include <stdio.h>

// Function to calculate the nth Fibonacci term
unsigned long long get_fibonacci(int n) {
    // Handle invalid negative inputs
    if (n < 0) {
        printf("Error: Input must be a non-negative integer.\n");
        return 0;
    }
    
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0; // Represents F(i-2)
    unsigned long long b = 1; // Represents F(i-1)
    unsigned long long next;  // Represents F(i)

    // Iteratively calculate Fibonacci terms from 2 up to n
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;        // Move b to a
        b = next;     // Move next to b
    }
    
    return b;
}

int main() {
    int n;

    printf("Enter the position (n) of the Fibonacci term: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    unsigned long long result = get_fibonacci(n);
    
    // Only print the result if the input was valid
    if (n >= 0) {
        printf("The %d-th Fibonacci term is: %llu\n", n, result);
    }

    return 0;
}