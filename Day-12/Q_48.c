//Write a program to Write function for perfect number.

#include <stdio.h>

void perfect_number(int n) {
    int sum = 0;

    // Find and sum all proper divisors of n
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }
}

int main() {
    int a;

    printf("Enter the number: ");
    if (scanf("%d", &a) != 1 || a <= 0) {
        printf("Invalid input: Enter a positive integer.\n");
        return 1; // Exit early if the input is invalid
    }

    perfect_number(a);

    return 0;
}